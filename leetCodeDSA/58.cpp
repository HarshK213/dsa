#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int ans = 0;
        while(n>0 && s[n-1] == ' '){
            s.erase(n-1,1);
            n--;
        }
        while(n>0 && s[n-1] != ' '){
            ans++;
            n--;
        }
        return ans;
    }
};