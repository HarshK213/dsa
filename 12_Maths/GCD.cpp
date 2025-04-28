#include <iostream>
#include <algorithm>
using namespace std;

int GCD_Brute(int m,int n){
	int ans = 1;
	cout << min(m,n) << endl;
	for(int i = min(m,n);i>1;i--){
		if(m%i == 0 && n%i == 0){
			ans = i;
			break;
		}
	}
	return ans;
}

int GCD_Euclid(int a,int b){
	 while(a>0 && b>0){
	 	if(a>b)a=a%b;
		else b=b%a;
	 }
	 if(a==0)return b;
	 return a;
}

int GCD_Rec(int m,int n){
// Here, we assume that m is greater value and n is smaller value(always)
	if(n==0)return m;
	return GCD_Rec(n,m%n);
}

int main(){

//	cout << "HELLO WORLD" << endl;
//	cout << GCD_Brute(20,28) << endl;
//	cout << GCD_Euclid(28,20) << endl;
	cout << GCD_Rec(28,20) << endl;


	return 0;
}
