#include <iostream>
#include <string>
using namespace std;

string solve(string s){
	int len = s.length();
	char f = s[0], l = s[len-1];
	string ans = f+to_string(len-2)+l;
	return ans;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		string s;
		cin >> s;
		if(s.length()>10){
			cout << solve(s) << endl;
		}else{
			cout << s << endl;
		}
	}
	return 0;
}

