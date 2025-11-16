#include <iostream>
#include <string>
using namespace std;

bool solve(string s){
	int count = 1;
	char prev = s[0];
	for(int i = 1;i<s.size();i++){
		if(s[i] == prev){
			count++;
		}else{
			count = 1;
			prev = s[i];
		}
		if(count >=7)return true;
	}
	return false;
}

int main(){
	string s;
	cin >> s;
	cout << (solve(s)?"YES":"NO") << endl;
	return 0;
}
