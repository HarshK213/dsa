#include <iostream>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* fake = new ListNode();
    ListNode* temp = fake;
    int carry = 0;

    while((l1 != NULL) || (l2 != NULL) || (carry >0)){
        int val1 = (l1 == NULL)?0:l1->val;
        int val2 = (l2==NULL)?0:l2->val;
        
        int sum = val1+val2+carry;

        carry = sum/10;
        sum = sum%10;

        ListNode* newNode = new ListNode(sum);
        temp->next = newNode;
        temp = temp->next;

        l1 = (l1 == NULL)?NULL:l1->next;
        l2 = (l2 == NULL)?NULL:l2->next;
    }
    return fake->next;   
}