#include <iostream>
using namespace std;

/*
int main(){
    int n;
    cout << "Enter any value:";
    cin >> n;

    for(int i=1;i<=n;i++){
    
        for(int j=1;j<=n;j++){
            cout << j <<" ";
        }
    cout<<endl;
    }
}
/*
OUTPUT:- 

Enter any value:6
1 2 3 4 5 6 
1 2 3 4 5 6 
1 2 3 4 5 6 
1 2 3 4 5 6 
1 2 3 4 5 6 
1 2 3 4 5 6
*/



//for *

/*
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

// for ABC

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