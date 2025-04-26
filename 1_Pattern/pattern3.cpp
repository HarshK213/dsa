#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter any number :";
    cin >> n;

    for(int i=0;i<n;i++){
        char a = 'A';

        for(int j=0; j<n; j++){
            cout << a << " ";
            a+=1;
        }
        cout << endl;
    }
}

/*
OUTPUT:-

Enter any number :5
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/

