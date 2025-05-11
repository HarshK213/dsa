#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int x){
        val = x;
        next = prev = NULL;
    }
};

class DoublyLL{
    Node* head;
    Node* tail;

public:
    DoublyLL(){
        head = tail = NULL;
    }

    void push_front(int num){
        Node* newNode = new Node(num);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
            return;
        }
    }

    void push_back(int num){
        Node* newNode = new Node(num);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL)return;
        Node* temp = head;
        head = head->next;
        if(head != NULL)head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL)return;
        Node* temp = tail;
        tail = tail->prev;
        if(tail!=NULL)tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }

    void print(){
        Node* temp = head;

        while(temp!= NULL){
            cout << temp->val << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    DoublyLL dll;

    dll.push_front(1);
    dll.push_front(2);
    dll.push_back(3);

    dll.print();


    return 0;
}