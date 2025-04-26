#include <iostream> 
#include <vector>
using namespace std;

int main(){
    


    /*
    We have two type of brute force approach , 
            one of complexity O(n^3), 
            and other is of O(n^2)
    */

   /*
   // O(n^3)
    int maxsum =0;
    for(int start=0; start<v.size();start++){
        for(int end= start;end<v.size();end++){
            int sum = 0;            
            for(int i=start;i<=end;i++){
                sum += v[i];
            }
            maxsum = max(maxsum, sum);
        }
    }
    cout<< maxsum;
    */


    /*    
    // O(n^2)
    int maxsum =INT_MIN;
    for(int start=0; start<v.size();start++){
        int sum = 0;            
        for(int end= start;end<v.size();end++){
            sum += v[end];
            maxsum = max(maxsum, sum);
        }
    }
    cout<< maxsum;
    */






    // There is a MOST optimized approach possible that is KADANE'S ALGORITHM.      O(n)

    /*
    basically this algo reset the sum =0 when it become -ve. as to find the max sum the -ve no. will only decrease the number.
    */
    vector<int> v0 = {3,-4,5,4,-1,7,-8};
    vector<int> v ={-1,-2,-3,-4,-5};

    int sum = 0, maxsum =INT_MIN;
    for(int start=0; start<v0.size();start++){
        sum+=v0[start];
        maxsum = max(sum, maxsum);
        if(sum<0){
            sum = 0;
        }
    }
    cout<< maxsum;


    return 0;
    
    }