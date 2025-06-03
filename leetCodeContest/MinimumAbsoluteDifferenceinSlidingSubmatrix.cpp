class Solution {
public:
    int getmin(vector<vector<int>> &grid, int row,int col,int k){
        set<int> ele;

        for(int i = row;i<row+k;i++){
            for(int j= col;j<col+k;j++){
                ele.insert(grid[i][j]);
            }
        }
        if(ele.size()<=1)return 0;
        int mindif = INT_MAX;
        auto it = ele.begin();
        int prev = *it;
        ++it;
        for(;it!= ele.end();++it){
            mindif = min(mindif,abs(*it-prev));
            prev = *it;
        }
        return mindif;
    }
    
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>ans(m-k+1,vector<int>(n-k+1,0));
        for(int i = 0;i<=m-k;i++){
            for(int j = 0;j<=n-k;j++){
                ans[i][j] = getmin(grid,i,j,k);
            }
        }
        return ans;
    }
};