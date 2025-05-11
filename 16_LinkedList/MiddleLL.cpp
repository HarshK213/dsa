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

ListNode* middleNode(ListNode* head) {
    ListNode* sl = head;
    ListNode* f = head;
    
    while (f != nullptr && f->next != nullptr) {
        sl = sl->next;
        f = f->next->next;
    }
    
    return sl;
}

int main(){

    return 0;
}