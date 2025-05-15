#include <iostream>
#include <math.h>
using namespace std;

bool judgeSquareSum(int c) {
    int i = 0,j = sqrt(c);
    while(i<=j){
        if(j == sqrt(c - i*i))return true;
        else if(j < sqrt(c-i*i))i++;
        else j--;
    }
    return false;
}