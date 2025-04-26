#include <iostream>
#include <cmath>
using namespace std;

/*
// Q. check if a number is prime or not.

bool isprime(int n){
	
	if(n<=1){
		return false;
	}

	int root = sqrt(n);
	for(int i=2;i<=root;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cout << "Enter any number : ";
	cin >> n;
	
	if(isprime(n)){
		cout << n << " is a prime number." << endl;
	}else{
		cout << n << " is not a prime number." << endl;
	}

	return 0;
}
*/


/*
// Q. print all prime numbers from 2 to N.

bool isprime(int n){
        
        if(n<=1){
                return false;
        }

        int root = sqrt(n);
        for(int i=2;i<=root;i++){
                if(n%i==0){
                        return false;
                }
        }
        return true;
}

int main(){
	int n;
	cout << "Enter any number : ";
	cin >> n;
	for(int i=2;i<n+1;i++){
		if(isprime(i)){
			cout << i << ",";
		}	
	}
	cout << endl;
	return 0;
}
*/



// Q. print nth fibonacci.

int fibo(int i){
	if(i==0){
		return 0;
	}else if(i==1){
		return 1;
	}else{
		return fibo(i-1)+fibo(i-2);
	}
}

int main(){
	int n;
	cout << "Enter any number : ";
	cin >> n;
	for(int i=0;i<n+1;i++){
		cout << fibo(i) << endl;
	}
}

