/* Longest Palindrome substring */

#include <iostream>
#include <string>
using namespace std;

class Solution{
    public:

    /*  Approach - 1

    TC - O(n^3)

        bool checkPalindrome(int st, int e, string s){
            while(st<e){
                if(s[st] == s[e]){
                    st++;
                    e--;
                }else{
                    return false;
                }
            }
            return true;
        }
        string longestPalindrome(string s){
            string ans = "";
            for(int i = 0;i<s.length()-1;i++){
                for(int j = i+1;j<s.length();j++){
                    //here string is for s[i] to s[j]
                    if(s[i] != s[j])continue;
                    if(checkPalindrome(i,j,s)){
                        ans = (j-i+1 > ans.length())? s.substr(i,j-i+1) : ans;
                    }
                }
            }
            return ans;
        }

        */


        /*
         Approach - 2
         */
         string longestPalindrome(string s){
             if (s.empty() || s.length() < 1) return "";

            int start = 0, maxLength = 1;
            int n = s.length();

            // Check odd length palindromes
            for (int i = 0; i < n; i++) {
                int left = i, right = i;
                while (left >= 0 && right < n && s[left] == s[right]) {
                    if (right - left + 1 > maxLength) {
                        start = left;
                        maxLength = right - left + 1;
                    }
                    left--;
                    right++;
                }
            }

            // Check even length palindromes
            for (int i = 0; i < n - 1; i++) {
                int left = i, right = i + 1;
                while (left >= 0 && right < n && s[left] == s[right]) {
                    if (right - left + 1 > maxLength) {
                        start = left;
                        maxLength = right - left + 1;
                    }
                    left--;
                    right++;
                }
            }

            return s.substr(start, maxLength);
         }
};

int main(){
    string s = "babad";
    Solution sol;
    string ans = sol.longestPalindrome(s);
    cout << ((ans == "")?"NULL":ans) << endl;
    return 0;
}
