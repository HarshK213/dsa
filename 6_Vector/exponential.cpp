#include <iostream>
using namespace std;

double expo(double x, int n){

    if(n == 0){ 
        cout << "condition_";
        return 1.0;}
    if(x ==0){ 
        cout << "condition__";
        return 0.0;}
    if(x == 1){ 
        cout << "condition___";
        return 1.0;}
    if(x == -1 && n%2 ==1){ 
        cout << "condition_ _ _ _";
        return 1.0;}
    if(x == -1 && n%2 !=1) {
        cout << "condition_ _ _";
        return -1.0;}
    
    if(n<0){
        x = (1/x);
        n = (-1)*n;
        cout << "Condition1" << endl;
    }
    long binN = n;
    double ans = 1;
    cout << binN;
    while(binN>0){
        if(binN%2 == 1){
            ans*=x;
        }
        x*=x;
        binN/=2;
        cout << "Condition2" << endl;
    }
    return ans;
};

int main(){
    int power;
    double num;
    cout << "Enter any number : ";
    cin >> num;
    cout << "Enter power of number : ";
    cin >> power;
    cout << expo(num,power);
}