#include <iostream>
using namespace std;

/*
int main(){
	int n;
	cout<<"Enter any number : ";
	cin >> n;

	for(int i=0;i<n;i++){
		
		for(int j=n-i-1;j>0;j--){
			cout<<" ";
		}

		for(int j=0;j<i+1;j++){
			cout<<j+1;
		}

		for(int j=i;j>0;j--){
			cout<<j;
		}		
		cout<<endl;
	}

	return 0;
}
/*
OUTPUT:-

Enter any number : 9
        1
       121
      12321
     1234321
    123454321
   12345654321
  1234567654321
 123456787654321
12345678987654321
*/



int main(){
        int n;
        cout<<"Enter any number : ";
        cin >> n;

        for(int i=0;i<n;i++){
		
		char ch = 'A';

                for(int j=n-i-1;j>0;j--){
                        cout<<" ";
                }

                for(int j=0;j<i+1;j++){
                        cout<<ch;
			ch++;
                }
		ch--;
		for(int j=i;j>0;j--){
			cout<<--ch;
                }
                cout<<endl;
        }

        return 0;
}
/*
Enter any number : 4
   A
  ABA
 ABCBA
ABCDCBA
*/
