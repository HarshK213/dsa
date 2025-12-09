/* Reverse Integer */

#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long int num = x;
        long long int ans = 0;
        while(abs(num)>0){
            int lastDig = num%10;
            num = num/10;
    		if(ans > INT_MAX/10 || ans < INT_MIN/10)return 0;
            ans = ans*10 + lastDig;
        }
        if(x<0)return (ans);
        return ans;
    }
};

int main(){
    Solution sol;
    long long int n;
    cin >> n;
    cout << sol.reverse(n) << endl;
    return 0;
}