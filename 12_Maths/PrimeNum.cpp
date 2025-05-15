#include <iostream>
#include <vector>
using namespace std;

//Q. to find if a number is a prime or not.
string isPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i == 0)return "NON Prime";
	}
	return "Prime";
}

//Q. to find the prime number smaller than a given number
// this is SIEVD OF ERATOSTHENES algorithm.
int countPrimes(int n){
	vector<bool> isprime(n+1,true);
	int count =0;

	for(int i = 2;i<n;i++){
		if(isprime[i]){
			count++;

			for(int j = i*2;j<n;j=j+i){
				isprime[j] = false;
			}
		}	
	}
	return count;
}

int main(){

	int n;
	cin >> n;
	cout << countPrimes(n) << endl;
	return 0;
}
