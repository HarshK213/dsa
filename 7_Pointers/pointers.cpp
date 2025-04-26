#include <iostream>
using namespace std;

int main(){
  
/*  
    //Memory Location
    int a = 10;
    cout << &a << endl; //-> 0xc0639ffb94


    int* ptr = &a;      // -> it is a pointer.
    cout << ptr << endl;// -> 0xc0639ffb94

    int** parentptr = &ptr;     // -> it is a pointer to a pointer.
    cout << parentptr << endl;  //-> 0xccbbfffa18



    // * is a dereferencing operator.

    cout << *ptr << endl;       //-> 10
    cout << *parentptr << endl;       //-> 0xc0639ffb94
    cout << **parentptr << endl;      //-> 10

    // null pointer

        // If we want to create a pointer that point at nothing, that pointer is said to be null pointer.
        // int* ptr;
        // cout << ptr << endl;    // it will pointer at some memory location .
        
        // The right way is :
        int* ptr = NULL; //this is a null pointer.

    // H.W.
    int a = 5;
    int* p = &a;
    int** q = &p;
    cout << *p << endl;//5
    cout << **q << endl;//5
    cout << p << endl;// Address of a
    cout << *q << endl;// Address of a

    // Pass by reference
        // 1. Pointer.
            int a = 10; 
            void changeA(int a){    // This is defined outside main funciton.
                a=30;
            }
            changeA(a)              // doesn't change anything as it is pass by value.
            cout << a << endl;      // 10
            void changeA(int* ptr){    // This is defined outside main funciton.
                * ptr=30;
            }
            changeA(&a)              
            cout << a << endl;      // 30 
        // 2. Alias.
            int a = 10;
            void changeA(int &b){
                b=30;
            }
            changeA(a);
            cout << a << endl;      // 30/

    // Array Pointer.
        int arr [] = {1,2,3,4,5};
        // here, arr is a pointer that point at that memory address of first element of arr, i.e. 1.
        int a = 10, b= 15;
        int* ptr = &a;
        ptr = &b;
        // here as the normal pointer we can change to which address the pointer ptr will point.
        // but , in array pointers are constant.
        // arr = &a ; // this will give error.
    
    // Pointer Arithmetic
        int a = 10;             // address = 100
        int* ptr = &a;          // ptr =100
        cout << *ptr++ << endl;  // ptr++ = 104
        // As ptr is an integer pointer. incrementing it by one will increment the memory by 4bytes. Therefore, ptr++ is 104 instead of 101.

        // similarly 
        cout << *(ptr+2) << endl;  // ptr+2 = 108
        cout << *(ptr-3) << endl;  // ptr+2 = 88

        // we cannot add two pointer , but we can subtract them if they have same datatype.
        int* ptr;   // address - 100
        int* ptr1;  // address - 112
        cout << ptr1 - ptr << endl;     // this will give us how many int can accomodate in between that space
        // in this case 112 - 100 = 12 can accomodate 3 int 
        // therefore the answer will be 3.

        // similarlyy like that we can perform these operations on pointer 
        // (<, <=, >, >=, ==, !=) 
*/

    // H.W.
        int arr[] = {10,20,30,40};
        int *ptr = arr;

        cout << *(ptr+1) << endl;//20
        cout << *(ptr +3) << endl;//40
        ptr++;
        cout << ptr << endl;//20



    return 0;
}