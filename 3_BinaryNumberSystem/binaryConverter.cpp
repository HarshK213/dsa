#include <iostream>
using namespace std;

int DecToBin(int n){
	int ans = 0;
	int pow = 1;
	while(n>0){
		int rem = n%2;
		n = n/2;
		ans += rem*pow;
		pow*=10;
	}
	return ans;
}

int BinToDec(int n){
	int ans=0, pow=1;
	while(n>0){
		int rem = n%10;
		n/= 10;
		ans+= rem*pow;
		pow*=2;
	}
	return ans;
}



int main(){
	int n,choice;
	cout << "Enter 1 for Decimal to Binary conversion\nEnter 2 for Binary to Decimal conversion : ";
	cin >> choice;

	switch(choice){
		case 1:
			cout << "Enter Decimal number :";
			cin >>n;
			cout << n << " = " << DecToBin(n) << endl;
			break;
		case 2:
			cout << "Enter Binary number :";
                        cin >>n;
                        cout << n << " = " << BinToDec(n) << endl;
                        break;
		default:
			cout << "Enter valid Choice."<< endl;
	}
	return 0;
}
