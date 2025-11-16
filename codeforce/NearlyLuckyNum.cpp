#include <iostream>
using namespace std;

bool solve(long long n){
	int luck = 0;
	while(n>0){
		int rem  = n%10;
		if(rem == 4 || rem == 7)luck++;		
		n=n/10;
	}
	if(luck == 4 || luck == 7)return true;
	return false; 
}

int main(){
	long long n ;
	cin >> n;
	if(solve(n)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}

