#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number : ";
    cin >>n;
    char num = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << num <<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}

/*
OUTPUT:-

Enter any number : 5
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
*/

