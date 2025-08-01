#include <iostream>
using namespace std;

bool solve(int w){
	for(int i = 2;i<=w/2;i+=2){
		if(i%2 == 0 && (w-i)%2 == 0)return true;
	}
	return false;
}

int main(){
	int w;
	cin >> w;
	cout << (solve(w)?"YES":"NO")<< endl;
	return 0;
}

