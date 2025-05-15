 #include <iostream>
using namespace std;

// Q. reverse an Integer n.
//
//
// SOLUTION:


int revint(int n){
	int rev =0;
	while(n!=0){
		rev = (rev*10)+(n%10);
		n=n/10;
	}
	return rev;
}

int main(){
	int r;
	cout << "Enter any number : ";
	cin >> r;
	cout << "Reversed interger : " << revint(r) << endl;

	return 0;
}

