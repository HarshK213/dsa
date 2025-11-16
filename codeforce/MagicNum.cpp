#include <iostream>
#include <string>
using namespace std;

bool helper(string s){
	string c1 = "1", c2 = "14", c3 = "144";
	for(int i = 0; i<s.length(); ){
		string s1 = s.substr(i,1), s2 = s.substr(i,2), s3 = s.substr(i,3);
		if(s3 == c3){
			i+=3;
		}else if(s2 == c2){
			i+=2;
		}else if(s1 == c1){
			i+=1;
		}else{
			return false;
		}
	}
	return true;
}

int main(){
	string n;
	cin >> n;
	cout << (helper(n)?"YES":"NO") << endl;
	return 0;
}
