#include <iostream>
#include <vector>
using namespace std;


class Solution {
    private:
        vector<vector<long long>> matrixMultiply(vector<vector<long long>>& A, vector<vector<long long>> &B, int M){
            int size = 26;
            vector<vector<long long >> res(size,vector<long long>(size,0));
            for(int i = 0;i<size;i++){
                for(int k = 0;k<size;k++){
                    if(A[i][k] == 0)continue;
                    for(int j = 0 ;j<size;j++){
                        res[i][j] = (res[i][j] + A[i][k] * B[k][j])%M;
    
                    }
                }
            }
            return res;
        }
    
        vector<vector<long long>> matrixPower(vector<vector<long long>>& mat, int power, int M){
            int size = 26;
            vector<vector<long long>> res(size,vector<long long>(size,0));
            for(int i = 0;i<size;i++){
                res[i][i]=1;
            }
            vector<vector<long long>> base = mat;
            while(power>0){
                if(power%2 == 1)
                    res = matrixMultiply(res,base,M);
                base = matrixMultiply(base,base,M);
                power/=2;
            }
            return res;
        }
    
    public:
        int M = 1e9+7;
        int size = 26;
        int lengthAfterTransformations(string s, int t, vector<int>& nums) {
    
            vector<vector<long long>> T(size,vector<long long>(size,0));
            for(int i = 0;i<size;++i){
                for(int j = 1;j<=nums[i];++j){
                    T[i][(i+j)%size]++;
                }
            }
    
            vector<vector<long long>> T_exp = matrixPower(T,t,M);
    
            vector<long long> freq(size,0);
            for(char c : s){
                freq[c-'a']++;
            }
    
            long long total = 0;
            for(int j = 0;j<size;++j){
                long long sum = 0;
                for(int i = 0;i<size;++i){
                    sum = (sum+freq[i]*T_exp[i][j])%M;
                }
                total = (total+sum)%M;
            }
            return total;
        }
    };