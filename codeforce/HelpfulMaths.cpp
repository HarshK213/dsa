#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

void sortedstring(string &s){
	unordered_map<char, int> um;
	for(char i:s){
		if(i == '+')continue;
		um[i]++;
	}
	int idx = 0;
	for(int i = 0;i<um['1'] ;i++){
		s[idx] = '1';
		idx+=2;
	}
	for(int i = 0;i<um['2'];i++){
		s[idx] = '2';
		idx+=2;
	}
	for(int i = 0;i<um['3'];i++){
		s[idx] = '3';
		idx+=2;
	}
}

int main(){
	string s;
	cin >> s; 
	if(s.length() == 1)cout << s << endl;
	else{
		sortedstring(s);
		cout << s << endl;
	}
	return 0;
}
