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

ListNode* partition(ListNode* head, int x) {
    ListNode* after_head = new ListNode(0);
    ListNode* before_head = new ListNode(0);
    ListNode* after = after_head;
    ListNode* before = before_head;

    ListNode* temp = head;
    while(temp != NULL){
        if(temp->val < x){
            before->next = temp;
            before = before->next;
        }else{
            after->next = temp;
            after = after->next;
        }
        temp = temp->next;
    }

    before->next = after_head->next;
    after->next = NULL;

    return before_head->next;
}