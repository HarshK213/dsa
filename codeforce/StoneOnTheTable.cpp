#include <iostream>
#include <string>
using namespace std;

int stonesToRemove(string s, int n){
	char prev = s[0];
	int ans = 0;
	for(int i =1;i<n;i++){
		if(s[i] == prev){
			ans++;
		}
		prev = s[i];
	}
	return ans;
}

int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	cout << stonesToRemove(s, n) << endl;
	return 0;
}
