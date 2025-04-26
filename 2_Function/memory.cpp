#include <iostream>
using namespace std;

// PASS BY VALUE
// whenever we pass a variable in argument, a copy of variable is created in call stack(with different address, i.e. a completely different value have nothing to do with main function value
// this process is called passing by value.


/*
void fun(int x){
	x+=25;
	cout<<"x = "<<x<<endl;
}
int main(){
	int x=5;
	fun(x);
	cout<< "main x = " << x << endl;

	return 0;
}
*/


// Q. Find the sum of values of a number ?
/*
Answer.

int sumofval(int x){
	int sum=0;
	while(x>0){
	        int rem = x%10;
		x= x/10;
		sum+=rem;
	}
	return sum;
}
int main(){
	int n;
	cin >> n;
	cout << sumofval(n) << endl;

	return 0;
}
*/


// Q. Calculate binomial cofficient nCr for given n and r ?

int fact(int x){
	int fac = 1;
	for(int i=1; i < x+1; i++){
		fac *= i;
	}
	return fac;
}

int bin(int x, int y){
	int ans;

	ans = (fact(x)/(fact(y)*fact(x-y)));
	return ans;
}

int main(){
	
	int n,r;
	cout << "n = ";
	cin >>n;
	cout << "r = ";
	cin >> r;

	cout << n << "C" << r << "=" << bin(n,r) << endl;

	return 0;
}

