#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int M = 1e9 + 7;
        int lengthAfterTransformations(string s, int t) {
            // int n = s.length();
            vector<int> m(26,0);
    
            for(char i : s)m[i-'a']++;
    
            for(int i=0;i<t;i++){
                vector<int> tm(26,0);
                for(int j = 0;j<26;j++){
                    char c = j+'a';
                    int f = m[j];
                    if(c != 'z'){
                        tm[j+1] =(tm[j+1]+f)%M;
                    }else{
                        tm[0]=(tm[0]+f)%M;
                        tm[1]=(tm[1]+f)%M;
                    }
                }
                m = move(tm);
            }
    
            int res = 0;
            for(int i = 0;i<26;i++){
                res = (res+m[i]) %M;
            }
            return res;
    
        }
    };