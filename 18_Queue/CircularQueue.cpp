#include <iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int f,r;
    int currSize, cap;

    public:
        CircularQueue(int size){
            cap = size;
            arr = new int(cap);
            currSize = 0;
            f = 0;
            r = -1;
        }

        void push(int val){
            if(currSize == cap)return;
            r = (r+1)%cap;
            arr[r] = val;
            currSize++;
        }

        void pop(){
            if(empty())return;
            f = (f+1)%cap;
            currSize--;
        }

        int front(){
            if(empty())return -1;
            return arr[f];
        }

        bool empty(){
            return currSize == 0;
        }
};

int main(){

    return 0;
}