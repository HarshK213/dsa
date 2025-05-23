#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maximumValueSum(vector<int> &nums, int k, vector<vector<int>>& edges){
     vector<int> profit;
     long long sum = 0;
     for(int i = 0; i < nums.size(); i++){
          profit.push_back((nums[i]^k)-nums[i]);
          sum += static_cast<long long>(nums[i]);
     }
     sort(profit.begin(), profit.end(), greater<int>());

     for(int i = 0; i< profit.size()-1; i++){
          long long pairsum = profit[i]+profit[i+1];
          if(pairsum >0){
               sum+= pairsum;
          }
     }
     return sum;
}