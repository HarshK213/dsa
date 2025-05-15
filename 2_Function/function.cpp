#include <iostream>
using namespace std;

void hello(){
	cout << "Hello"<<endl;
}

int minoftwo(int a,int b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}

int sumofn(int n){
	int sum =0;
	for(int i=1;i<n+1;i++){
		sum+=i;
	}
	return sum;
}

int factorial(int n){
	int fac =1;
	for(int i=1;i<n+1;i++){
		fac*=i;
	}
	return fac;
}


int main(){
//	hello();
//	hello();
	cout << factorial(5) <<endl;
	return 0;
}

