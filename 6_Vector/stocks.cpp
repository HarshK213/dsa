#include <iostream>
#include <vector>
using namespace std;


int max_profit_brute(vector<int>& vec){
    int n = vec.size();
    int maxprofit = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vec[j]-vec[i] > maxprofit){
                maxprofit = vec[j]-vec[i];
            }
        }
    }
    return maxprofit;
}

int max_profit_better(vector<int>& vec){
    int maxprofit =0;
    int bestbuy = vec[0];
    for(int i =1;i<vec.size();i++){
        if(vec[i]>bestbuy){
            maxprofit = max(vec[i]-bestbuy,maxprofit);
        }
        bestbuy = min(bestbuy,vec[i]);
    }
    return maxprofit;
}


int main(){
    vector<int> vec = {7,1,5,3,6,4};
    // cout << "MaxProfit : " << max_profit(vec) << endl;
    cout << "MaxProfit : " << max_profit_better(vec) << endl;


    return 0;
}