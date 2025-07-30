#include <iostream>
using namespace std;
 
int minNum(int x){
    int minN = INT_MAX;
    while(x>0){
        int rem = x%10;
        x=x/10;
        minN = min(minN, rem);
    }
    return minN;
}
 
int main(){
    int n;
    cin >> n;
    for(int i = 0 ;i< n;i++){
        int x ;
        cin >> x;
        cout << minNum(x) << endl;
    }
    return 0;
}