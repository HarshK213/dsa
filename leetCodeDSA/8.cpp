/* String to Integer (atoi) */

#include <iostream>
#include <string>
#include <cctype>
#include <climits>
using namespace std;

class Solution{
    public:
    int myAtoi(string s){
        int ans = 0, st = 0, n = s.size();
        bool isNeg = false;
        
        //remove the leading whitespaces
        while(st<n && s[st]==' ')st++;
        s.erase(0,st);
        
        n-=st;
        st=0;

        // check for the sign in front
        if(s.front() == '+')st++;
        if(s.front() == '-'){
            isNeg = true;
            st++;
        }

        //conversion
        while(st < s.size() && isdigit(s[st])){
            int dig = s[st]-'0';
            //check for overflow
            if(ans>INT_MAX/10 || (ans == INT_MAX/10 && dig > INT_MAX%10)){
                return (isNeg)?INT_MIN:INT_MAX;
            }
            ans= ans*10 + dig;
            st++;
        }

        
        return ((isNeg)?-1*ans:ans);
    }
};

int main(){
    Solution sol;
    string s;
    cin >> s;
    cout << sol.myAtoi(s) << endl;
    return 0;
}