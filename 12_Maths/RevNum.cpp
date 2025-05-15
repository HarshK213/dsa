#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int revNum(int x){
	int n = x;
	int ans = 0;
	while(abs(n)>0){
		int lastDig = n%10;
		n=n/10;
		if(ans > INT_MAX/10 || ans < INT_MIN/10)return 0;
		ans = (ans*10) + lastDig;
	}
	return ans;
}

int main(){
	cout << revNum(-1234) << endl;
	return 0;
}
