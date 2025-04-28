#include <iostream>
using namespace std;

int GCDRec(int m,int n){
	if(n==0)return m;
	return GCDRec(n,m%n);
}

int LCM(int m,int n){
	int gcd = GCDRec(m,n);
	return (m*n)/gcd;
}

int main(){
	cout << "LCM : " << LCM(28,20) << endl;

	return 0;
}
