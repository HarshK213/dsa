#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter any value:";
    cin >> n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){
            cout << "*";
        }
    cout<<endl;
    }
}

/*
OUTPUT :-

Enter any value:6
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
*/

