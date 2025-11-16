#include <iostream>
#include <algorithm>
using namespace std;

int helper(int n ,int m, int a ,int b){
    int price = 0;
    int numOfTicket = n/m;
    // cout << "NUM OF TICKET REQ : " << numOfTicket << endl;
    price += min(n*a, numOfTicket*b);
    n = n-(numOfTicket*m);
    price += min(n*a, b);
    return price;
}

int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    cout << helper(n,m,a,b) << endl;
    return 0;
}