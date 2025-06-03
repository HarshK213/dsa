class Solution {
public:

    bool BK(vector<int> &nums, int idx, long long pro, long long tar, vector<int> & sub){
        if(pro>tar)return false;
        if(pro == tar)return true;
        for(int i = idx;i<nums.size();i++){
            if(sub[i])continue;
            sub[i] = 1;
            if(BK(nums,i+1,pro*nums[i],tar,sub))return true;
            sub[i] = 0;
        }
        return false;
    }
    
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        int n = nums.size();
        vector<int> sub(n,0);
        for(int i = 0;i<n;i++){
            sub[i] = 1;
            if(BK(nums,i+1,nums[i],target,sub)){
                long long pro = 1;
                for(int j = 0;j<n;j++){
                    if(!sub[j])pro*= nums[j];
                }
                if(pro == target)return true;
            }
            sub[i] = 0;
        }
        return false;
    }
};©leetcode