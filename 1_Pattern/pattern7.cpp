#include <iostream>
using namespace std;

int main(){
        int n;
        cout<<"Enter any number :";
        cin>>n;
        for(int i=1;i<n+1;i++){
                for(int j=1;j<i+1;j++){
                        cout<<i<<" ";
                }
                cout<<endl;
        }
        return 0;
}
/*
Enter any number :4
1
2 2
3 3 3
4 4 4 4
*/

