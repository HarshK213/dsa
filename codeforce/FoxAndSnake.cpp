#include <iostream>
#include <string>
using namespace std;

string helper(string s1, char &side, int len){
	if(side == 'l'){
		s1[len-1] = '#';
	}else{
		s1[0] = '#';
	}
	side = (side == 'l')?'r':'l';
	return s1;
}

int main(){
	int r,c;
	cin >> r >> c;
	string s = "", s1 = "";
	for(int i = 0;i<c;i++){
		s+="#";
		s1+=".";
	}

	string ans = "";
	char side = 'l';

	for(int i = 1;i<=r;i++){
		if(i%2 == 1){
			ans+= s + "\n";
		}else{
			ans += helper(s1,side,c) + "\n";
		}
	}
	cout << ans << endl;
	return 0;
}
