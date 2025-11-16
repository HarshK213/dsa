#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> helper(string &s, string delimiter){
	vector<string> ans;
	int st = 0, e;
	int Dlen = delimiter.length();
	string token;

	while((e = s.find(delimiter, st)) != string::npos){
		token = s.substr(st, e-st);
		st = e+Dlen;
		ans.push_back(token);
	}
	ans.push_back(s.substr(st));
	return ans;
}

string trim(string &str){
	string s = str;
	s.erase(0,s.find_first_not_of(" \t\n\r\f\v"));
	s.erase(s.find_last_not_of(" \t\n\r\f\v")+1);
	return s;
}

int main(){
	string text, anstext="";
	cin >> text;
	vector<string> ans = helper(text, "WUB");
	for(string s: ans){
//		cout << s << endl;
		anstext = anstext + " " + s;
	}
	anstext = trim(anstext);
	cout << anstext << endl;
	return 0;
}

