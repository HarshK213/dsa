#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

char DFS(unordered_map<char, vector<char>> &um, char curr, vector<int> &visited){
     visited[curr-'a'] = 1;
     char minChar = curr;
     for(char &i:um[curr]){
          if(visited[i-'a']==0){
               minChar = min(minChar, DFS(um,i,visited));
          } 
     }
     return minChar;
}

string smallestEquivalentString(string s1, string s2, string baseStr) {
     int n = s1.length();
     unordered_map<char, vector<char>> um;
     for(int i = 0;i<n;i++){
          char a = s1[i];
          char b = s2[i];

          um[a].push_back(b);
          um[b].push_back(a);
     }
     int m = baseStr.length();
     string ans;
     for(int i = 0;i<m;i++){
          char a = baseStr[i];
          vector<int> visited(26,0);
          ans.push_back(DFS(um,a,visited));
     }
     return ans;
}