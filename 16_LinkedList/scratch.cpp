#include <iostream>
using namespace std;

// Individual Node class
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

// Now we form a LinkList
class LL{
    Node* head;
    Node* tail;

public:
    LL(){
        head = tail = NULL;
    }

    void push_front(int val){

        // create a new node
        Node* newNode = new Node(val);

        // checking if LL is empty or not
        if(head == NULL){   // if Empty
            head = tail = newNode;
            return;
        }else{              //not empty
            newNode->next = head;
            head = newNode;
        }
    }

    void print(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void pop_front(){
        if(head == NULL) return;
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_back(){
        if(head == NULL)return;

        Node* temp = head;
        while(temp->next != tail){                     // if tail is not given         temp->next->next != NULL
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;    
    }

    void insert(int val, int idx){
        if(idx<0)return;
        if(idx == 0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i = 0;i<idx-1;i++){
            if(temp == NULL)return;
            temp = temp->next;
        }
        
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int val){
        int ans = 0;
        Node* temp = head;
        while(temp->next != NULL){
            if(temp->data == val)return ans;
            temp = temp->next;
            ans++;
        }
        return -1;
    }
};

int main(){

    LL ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // ll.push_front(1);

    ll.print();

    ll.insert(4,1);
    ll.print();

    cout << ll.search(1) << endl;

    return 0;
}