#include <iostream>
#include <vector>
using namespace std;

vector<int> divisor(int num){
    vector<int> ans = {1};
    for(int i = 2;i*i<num;i++){
        if(num%i ==0){
            if(i == num/i){
                ans.push_back(i);
            }else{
                ans.push_back(i);
                ans.push_back(num/i);
            }
            
        }
    }
    return ans;
}
bool checkPerfectNumber(int num) {
    vector<int> ans = divisor(num);
    int sum  = 0;
    for(int i: ans){
        sum+=i;
        cout << i << endl;
    }
    if(sum == num ) return true;
    return false;
}

int main(){
    int num = 1;
    if(checkPerfectNumber(num))cout << "True" << endl;
    else cout << "False" << endl;
    

    return 0;
}