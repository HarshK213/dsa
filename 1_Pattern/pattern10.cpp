#include <iostream>
using namespace std;

int main(){
        int n;
        cout<<"Enter any number : ";
        cin>>n;

        for(int i=1;i<n+1;i++){
                int num = i;
                for (int j=1;j<i+1;j++){
                        cout<<num<<" ";
                        num--;
                }
                cout<<endl;
        }
        return 0;
}
/*
OUTPUT:-

Enter any number : 4
1
2 1
3 2 1
4 3 2 1
*/

