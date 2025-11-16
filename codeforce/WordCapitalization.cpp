#include <iostream>
#include <string>
using namespace std;

void helper(string &s){
	if((s[0]-'a') >= 0){
		s[0] = s[0] - 32;
	}		
}

int main(){
	string s;
	cin >> s;
	helper(s);
	cout << s << endl;
	return 0;
}

