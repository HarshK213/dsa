#include <iostream>
#include <string>
using namespace std;

int BinToDec(string s){
	int ans = 0;
	for(char i:s){
 		ans = ans << 1;
		if(i == '7'){
			ans = ans|1;
		}
	}
	return ans;
}

int helper(string s){
	int len = s.length();
	if(len == 1 && s == "4") return 1;
	if(len == 1 && s == "7") return 2;
	int ans = 0, pow = 1;
	for(int i = 1;i<=len-1;i++){
		ans = ans + (pow*=2);
	}
	ans = ans + BinToDec(s) + 1;
	return ans;
}

int main(){
	string s;
	cin >> s;
	cout << helper(s) << endl;
	return 0;
}
