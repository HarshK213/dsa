/* Longest Substring without repeating characters */

#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution{
    public:
    int LengthOfLongestSubstring(string s){
        int n = s.length();
        int maxLen = 0;
        for(int i = 0;i<n; i++){
            unordered_set<char> us;
            int currLen = 0;
            for(int j = i;j<n;j++){
                if(us.find(s[j]) == us.end()){
                    us.insert(s[j]);
                    currLen++;
                    if(maxLen < currLen){
                        maxLen = currLen;
                    }
                }else{
                    break;
                }
            }
        }

        return maxLen;
    }
};

int main(){
    string s = "pwwkew";
    Solution sol;
    cout << sol.LengthOfLongestSubstring(s) << endl;

    return 0;
}
