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

ListNode* swapPairs(ListNode* head) {
    // if(head == NULL)return head;
    
    // int k = 2,count = 0;
    // ListNode* temp = head;

    // while(count<k){
    //     if(temp == NULL)return head;
    //     temp= temp->next;
    //     count++;
    // }

    // ListNode* prev = swapPairs(temp);

    // temp = head;
    // count = 0;
    // while(count < k){
    //     ListNode* Ntemp = temp->next;
    //     temp->next = prev;
    //     prev = temp;
    //     temp = Ntemp; 
    //     count++;
    // }
    // return prev;


    if(head == NULL || head->next == NULL)return head;

    ListNode* first = head;
    ListNode* sec = head->next;
    ListNode* prev= NULL;
    
    while(first != NULL && sec != NULL){
        ListNode* third = sec->next;
        sec->next = first;
        first->next = third;
        if(prev == NULL){
            head = sec;
        }else{
            prev->next = sec;
        }

        prev = first;
        first = third;
        if(first != NULL)sec=first->next;
        else sec = NULL;
    }
    return head;
}