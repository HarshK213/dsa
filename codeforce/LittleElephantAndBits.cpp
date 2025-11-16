#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string helper(string n, int len){
	for(int i = 0;i<len;i++){
		if(n[i] == '0'){
			return n.substr(0,i)+n.substr(i+1);
		}
	}
	return n.substr(0,len-1);
}

int main(){
	string n;
	cin >> n;
	cout << helper(n, n.length()) << endl;
	return 0;
}
