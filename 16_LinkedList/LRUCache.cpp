#include <iostream>
#include <unordered_map>
using namespace std;

class LRU{
    class Node{
        public:
                int key,val;
                Node* next;
                Node* prev;
                Node(int k,int v){
                    key = k;
                    val = v;
                    next = prev = NULL;
                }
    }
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1.-1);

    LRU(int capacity){
        int limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    //helping functions
    void addNode(Node* newNode){
        Node* prevNext = head->next;
        newNode->prev = head;
        newNode->next = prevNext;
        head->next = newNode;
        prevNext->prev = newNode;
    }

    void delNode(Node* newNode){
        Node* oldNext = newNode->next;
        Node* oldprev = newNode->prev;
        oldprev->next = oldNext;
        oldNext->prev = oldprev;
        delete newNode;
    }
    
    unordered_map<int,Node*> m;

    // we have to complete this function.            
    void put(int key,int val){
        //if the key of the newNode already exist then the old node will be deleted and new Node will be inserted.
        if(m.find(key)!=m.end()){
            Node* oldNode = m[key];
            delNode(oldNode);
            m.erase(key);
        }
        //if capacity is full
        if(m.size() == limit):
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }

        Node* newNode = new Node(key,val);
        addNode(newNode);
        m[key] = newNode;
    }
    

    // and this funciton also.
    int get(int key){
        if(m.find(key) == m.end())return -1;
        ans = m[key]->val;
        Node* newNode = m[key];
        m.erase(key);
        delNode(newNode);
        addNode(newNode);
        m[key] = newNode;
        return ans;
    }
}
