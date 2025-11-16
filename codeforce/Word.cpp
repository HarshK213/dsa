#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int small=0, big=0;
	for(char i : s){
		if(i-'a' < 0)big++;
		else small++;
	}
	if(big > small){
		for(int i = 0;i<s.size();i++){
			if(s[i]-'a'>=0){
				s[i]-=32;
			}
		}
	}else{
		for(int i = 0;i<s.size();i++){
			if(s[i]-'a'<0){
				s[i]+=32;
			}
		}
	}
	cout << s << endl;
	return 0;
}

