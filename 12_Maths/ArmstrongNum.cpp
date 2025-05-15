#include <iostream>
using namespace std;

bool ArmStrong(int n){
	int res = n;
	int result = 0;
	while(res>0){
		int lastDig = res%10;
		res = res/10;
		result += lastDig*lastDig*lastDig;
	}
	if(result == n)return true;
	return false;
}

int main(){
//	cout << "HELLO WORLD" << endl;
	int n ;
	cin >> n;
	if(ArmStrong(n)) cout<<"IS ARMSTRONG" << endl;
	else cout << "IS NOT ARMSTRONG" << endl;

	return 0;
}
