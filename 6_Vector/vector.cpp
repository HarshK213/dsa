/*
Vector are array like structure with dynamic length.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector<int> vec; // declare a vector with no element and size 0.
    // cout << vec[0]; // generate error

    // vector<int> vec = {1,2,3};  // create a vector of size 3 .
    // cout << vec[0];             // print 1st element of vector -> 1
    
    // vector<int> vec(4,0);           // will create a vecotr of size 3 and all values are set to 0.
    // cout << vec[0] << endl;         // print 1st element of vector -> 0.

    /*
    on vector we generally use for each loop for convenience.
    */

   // for each loop
/*   for(int i: vec){
      cout << i << endl;
     }
*/






    /*
    Vector Functions :- 
        - size
        - push_back
        - pop_back
        - front
        - back 
        - at
    */

   // size
    // cout << "size : " << vec.size() << endl;

    // push_back - insert new element in back of vetor. automatically increase the length of vector
    // pop_back  - remove the last element from the vector.
    // front     - return the first element of vector.
    // back      - return the last element of vector.
    // at        - vec[i] == vec.at(i)




















// STATIC AND DYNAMIC ALLOCATION OF VECTOR

/*
static allocation :-

    here, Memory get stored at compile time.
    eg. array -> inr arr[5] -> here memory is get reserved for 5 place at compile time.

    happens in stack memory


dynamic allocation :-

    here, memory get allocated at run time.
    eg. vector -> vector<int> -> here, since the size is dynamic , therefore, the memory get allocated at run time.

    happens in heap memory.

*/


/*
WORKING OF VECTOR :-

    when we create an vector (vector<int>) it create an array of size 0
    now size -> 0, capacity -> 0
    
    when we push value vec's size increases to 1.
    now size -> 1, capacity -> 1

    push value. capacity become x2(two times)
    now size -> 2, capacity -> 2

    push value. capacity x 2
    now size -> 3, capacity -> 4

    push value. 
    now size -> 4, capacity -> 4

    push value. capacity x 2
    now size -> 5 capacity -> 8
*/

/*
vector<int> vec;

cout<< vec.size()<< endl;           
cout << vec.capacity() << endl;

vec.push_back(1);
cout<< vec.size()<< endl;
cout << vec.capacity() << endl;

vec.push_back(2);
cout<< vec.size()<< endl;
cout << vec.capacity() << endl;

vec.push_back(3);
cout<< vec.size()<< endl;
cout << vec.capacity() << endl;

vec.push_back(4);
cout<< vec.size()<< endl;
cout << vec.capacity() << endl;

vec.push_back(5);
cout<< vec.size()<< endl;
cout << vec.capacity() << endl;

*/









// leetcode single number problem
/*
vector<int> vec ={4,1,2,1,2,3,4};

int ans =0;
for(int i : vec){
    ans ^= i;
}
cout << ans << endl;
*/






// Linear Search
/*
vector<int> vec ={4,1,2,1,2,3,4};
int ans = 3;
for(int i=0;i<vec.size();i++){
    if(vec[i] == ans){
        cout << i;
        break;
    }
}
*/





//Reverse Array
/*
vector<int> vec ={4,1,2,1,2,3,4};
for(int i:vec){
    cout << i << " ";
}
cout << endl;
int start=0;
int end =vec.size()-1;
while(start<end){
    swap(vec[start],vec[end]);
    start++;
    end--;
}
for(int i:vec){
    cout << i << " ";
}
*/

    return 0;
}