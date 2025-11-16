#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

int helper(string s){

	int steps = 0;
	char curr = 'a';
	for(char c : s){
		int diff = abs(c-curr);
		curr = c;
		steps += min(diff, 26-diff);
	}
	return steps;
}

int main(){
	string s;
	cin >> s;
	cout << helper(s) << endl;
	return 0;
}
