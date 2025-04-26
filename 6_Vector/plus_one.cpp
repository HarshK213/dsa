#include <iostream>
#include <vector>
using namespace std;



vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        digits[len-1] += 1;
        while(digits[len-1] == 10){
            if((len-1) == 0 && digits[len-1] == 10){
                digits[len-1]=1;
                digits.push_back(0);
                break;
            }
            digits[len-1] = 0;
            digits[len-2]+= 1;
            len --;
        }

        return digits;
}

// vector<int> reverse_vec(vector<int>& digits){

// }

int main(){

    vector<int> digits {9,9,9,9,9,9};
    vector<int> v = plusOne(digits) ;
    for(int i: v){
        cout << i << " ";
    }

    return 0;
}