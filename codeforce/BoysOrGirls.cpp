#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool isGirl(string s){
	int wordCount = 0;
	unordered_set<char> us;
	for(char c : s){
		if(us.find(c) == us.end()){
			wordCount++;
			us.insert(c);
		}
	}
	if(wordCount%2 == 1)return false;
	return true;
}

int main(){
	string s;
	cin >> s;
	if(isGirl(s)){
		cout << "CHAT WITH HER!" << endl;
	}else{
		cout << "IGNORE HIM!" << endl;
	}
	return 0;
}
