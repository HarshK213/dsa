#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int num){
        val = num;
        next = NULL;
    }
};

class CircularLL{
    Node* head;
    Node* tail;

public:
    CircularLL(){
        head = tail = NULL;
    }

    void push_front(int num){
        Node* newNode = new Node(num);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void push_back(int num){
        Node* newNode = new Node(num);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void pop_front(){
        if(head == NULL)return;
        if(head == tail){
            delete head; 
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        head = head->next;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL)return;
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        while(temp->next->next == head){
            temp = temp->next;
        }
        tail->next = NULL;
        temp->next = head;
        delete tail;
        tail = temp;
    }

    void print(){
        Node* temp = head;
        cout << temp->val << " ";
        temp = temp->next;
        while(temp != head){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};