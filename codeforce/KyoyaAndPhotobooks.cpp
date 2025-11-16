#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int helper(string s){
	int size = s.length();
	return 26*(size+1)-(size);
}

int main(){
	string s;
	cin >> s;
	cout << helper(s) << endl;
	return 0;
}
