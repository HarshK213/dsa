#include <iostream>
#include <list>
using namespace std;

class ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool hasCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;          
        fast = fast->next->next;    
        
        if (slow == fast) {
            return true;            
        }
    }
    
    return false;                   
}

ListNode *detectCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;

    bool haveCycle = false;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;          
        fast = fast->next->next;    
        
        if (slow == fast) {
            haveCycle = true;
            break;
        }
    }

    if(haveCycle){
        slow= head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    return NULL;
}

int main(){

    return 0;
}