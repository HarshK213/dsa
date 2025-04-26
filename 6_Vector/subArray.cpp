#include <iostream> 
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    /*
    Subarray : 
        -> continuous.
        -> (n*(n-1))/2 are possible.
    
    sub array here are 
    1       2      3     4    5
    12      23     34    45
    123     234    345 
    1234    2345
    12345
 
    as per the pattern  the code for all possible subarray is below.
    */

    for(int start=0; start<v.size();start++){
        for(int end= start;end<v.size();end++){
            /*  From here all sub array can be accessed , Now we print them.*/
            
            for(int i=start;i<=end;i++){
                cout << v[i];
            }
            cout << "   ";
        }
        cout << endl;
    }

    /*
    OUTPUT : 

        1   12   123   1234   12345   
        2   23   234   2345
        3   34   345
        4   45
        5
    */


}