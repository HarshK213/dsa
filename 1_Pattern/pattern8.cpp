#include <iostream>
using namespace std;

int main(){
        int n;
        cout<<"Enter any number :";
        cin>>n;
        char c='A';
        for(int i=1;i<n+1;i++){
                for(int j=1;j<i+1;j++){
                        cout<<c<<" ";
                }
                c++;
                cout<<endl;

        }
        return 0;
}

/*
OUTPUT:-

Enter any number :4
A
B B
C C C
D D D D
*/

