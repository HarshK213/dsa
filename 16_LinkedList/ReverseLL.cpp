#include <iostream>
#include <list>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

ListNode* reverseList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // ListNode* new_head = reverseList(head->next);
    // head->next->next = head;
    // head->next = nullptr;

    // return new_head;

    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
    }
    
    return prev;
}

int main(){

    return 0;
}