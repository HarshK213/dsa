#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long ans = 0;
        for(int i = 0;i<=min(n,limit);i++){
            int rem = n-i;
            if(rem<=2*limit){
                int minAssign = max(0,rem-limit);
                int maxAssign = min(rem,limit);
                ans += (maxAssign - minAssign +1);
            }
        }
        return ans;
    }
};