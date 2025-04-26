#include <iostream>
#include <vector>
using namespace std;

vector<int> product_brute(vector<int>& vec){
    vector<int> ans;
    for(int i =0; i<vec.size();i++){
        int product = 1;
        for(int j=0;j<vec.size();j++){
            if(i==j)continue;
            product *= vec[j];
        }
        ans.push_back(product);         
    }
    return ans;
}

vector<int> product_optimal(vector<int>& nums){
    int n = nums.size();
    vector<int> prefix,suffix(n,1),ans;
    prefix.push_back(1);
    for(int i = 1;i<n;i++){
        prefix.push_back(prefix[i-1]*nums[i-1]);
    }

    suffix[n-1] = 1;
    for(int i=1;i<n;i++){
        suffix[n-i-1] = suffix[n-i]*nums[n-i];
    }

    for(int i = 0;i<n;i++){
        int j;
        j = prefix[i]*suffix[i];
        ans.push_back(j);
    }

    return ans;
}



vector<int> product_more_optimal(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,1);
    int prefix =1,suffix =1;
    for(int i = 1;i<n;i++){
        prefix = prefix * nums[i-1];
        ans[i]=prefix;
    }
    for(int i = n-2;i>=0;i--){
        suffix = suffix * nums[i+1];
        ans[i] = ans[i]*suffix;
    }

    return ans;
}

int main(){
    vector<int> vec = {1,2,3,4};
    vector<int> ans = product_more_optimal(vec);
    for(int i:ans){
        cout << i << "|";
    }
    return 0;
}