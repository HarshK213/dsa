#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    /*
        we have the following algorithms :
            reverse(v.begin(),v.end());
            next_permutation(v.begin(),v.end());
            prev_permutation(v.begin(),v.end());
            swap(a,b);
            min(3,5);
            max(2,5);
            max_element(v.begin,v.en());
            min_element(v.begin,v.en());
            binary_search(v.begin,v.end(),target);      -> return true is target is present else false
    
    */


    vector<int> vec = {3,1,4,6,5,2};

    // reverse(vec.begin(),vec.end());         //reverse whole array
    // reverse(vec.begin() + 1,vec.begin()+3); // reverse a part of a array

    // for(int i:vec)cout << i << " ";
    // cout << endl;


    string s = "abc";
    next_permutation(s.begin(),s.end());
    cout << s << endl;





    return 0;
}