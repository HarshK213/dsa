#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

Node* flatten(Node* head) {
    if(head == NULL)return head;

    Node* curr = head;
    while(curr != NULL){
        if(curr->child != NULL){
            //part 1
            Node* next = curr->next;
            curr-> next = flatten(curr->child);
            curr->next->prev = curr;
            curr->child = NULL;

            //part 2
            while(curr->next !=NULL){
                curr = curr->next;
            }

            //part 3
            if(next != NULL){
                curr->next = next;
                next->prev = curr;
            }
        }   
        curr = curr->next;
    }
    
    return head; 
}

