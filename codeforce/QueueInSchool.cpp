#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void swapBG(string &s){
	int st = 0;
	while(st<s.size()){
		if(s.substr(st,2) == "BG"){
			swap(s[st],s[st+1]);
			st+=2;
		}else{
			st++;
		}
	}
}

void helper(string &s, int n, int t){
	for(int i= 0;i<t;i++){
		swapBG(s);
	}
}

int main(){
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	helper(s, n, t);
	cout << s << endl;
	return 0;
}
