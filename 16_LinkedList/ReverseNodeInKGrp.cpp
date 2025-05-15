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

ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* temp = head;
    
    //part 1
    int count = 0;
    while(count < k){
        if(temp == NULL)return head;
        temp = temp->next;
        count++;
    }

    //part 2
    ListNode* prev = reverseKGroup(temp,k);

    //part 3
    temp = head;
    count = 0;
    while(count<k){
        ListNode* next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
        count++;
    }
    return prev;
}