#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
Q. an array of n+1 size will be given, and the array can contain value in between 1 to n. with a duplicate value we have to find that duplicate value.


    There are two approaches for finding the duplicates :
        1. using unordered_set -> TC:O(n), SC:O(n)      
        2. Fast Slow Pointer   -> TC:O(n), SC:O(1)      -> Better
*/

int Duplicate1(vector<int> &arr){
    unordered_set<int> s;
    for(int i:arr){
        if(s.find(i) != s.end()){
            return i;
        }
        s.insert(i);
    }
    return -1;
}

int Duplicate2(vector<int> &arr){
    
    int slow = arr[0] , fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];  
    } while (slow != fast);

    slow = arr[0];

    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main(){
    vector<int> arr = {3,1,3,4,2};
    cout<< Duplicate1(arr) << endl;
    cout<< Duplicate2(arr) << endl;

    return 0;
}