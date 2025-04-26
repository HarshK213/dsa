#include <iostream>
#include <vector>
using namespace std;




 
vector<int> pair_sum_brute(vector<int>& num,int target){
    int n = num.size();
    vector<int> ans;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(num[i]+num[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}



vector<int> pair_sum_optimal(vector<int>& num,int target){
    vector<int> ans;
    int i = 0;
    int j = num.size() -1;
    while(i<j){
        int sum = num[i]+num[j];
        if(sum > target){j--;}
        else if(sum<target){i++;}
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}


int main(){
    vector<int> num = {2,7,11,13};
    int target = 12;
    
    vector<int> ans = pair_sum_optimal(num,target);

    cout << "Pair : [" << num[ans[0]] << ", " << num[ans[1]]<< "]";


    return 0;
}