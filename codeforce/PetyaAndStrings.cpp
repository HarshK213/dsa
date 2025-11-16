#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int solve(string s1, string s2, int n){
	for(int i = 0;i<n;i++){
		char c1 = static_cast<char>(tolower(static_cast<unsigned char>(s1[i])));
		char c2 = static_cast<char>(tolower(static_cast<unsigned char>(s2[i])));
		if((c1-'a') < (c2-'a'))return -1;
		else if((c1-'a') > (c2-'a'))return 1;
	}
	return 0;
}

int main(){
	string s1,s2;
	cin >> s1 >> s2;
	int len = s1.length(), ans = solve(s1,s2,len);
	cout << ans << endl;
	return 0;
}

