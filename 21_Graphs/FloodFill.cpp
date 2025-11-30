#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        vector<vector<int>> floodFill(vector<vector<int>> &image, int i, int j, int color){
            cout << "inside floodFill func" << endl;
            int oriColor = image[i][j];
            vector<vector<bool>> visited(image.size(), vector<bool> (image[0].size(), false));
            if(i>=0 && i<image.size() && j>=0 && j<image[0].size()){
                helper(image, i, j, oriColor, color, visited);
            }
            return image;

        }

        void helper(vector<vector<int>> &image, int i, int j, int oriColor, int newColor, vector<vector<bool>> &vis){
            cout << "inside helper func" << endl;
            cout << "i & j : "<<i <<" " << j << endl;
            int currColor = image[i][j];
            vis[i][j] = true;
            if(currColor == oriColor){
                image[i][j] = newColor;
            }
            if(i-1>=0 && !vis[i-1][j] && image[i-1][j] == oriColor){
                helper(image, i-1, j, oriColor, newColor, vis);
            }
            if(j-1>=0 && !vis[i][j-1] && image[i][j-1] == oriColor){
                helper(image, i, j-1, oriColor, newColor, vis);
            }
            if(i+1 < image.size() && !vis[i+1][j] && image[i+1][j] == oriColor){
                helper(image, i+1, j, oriColor, newColor, vis);
            }
            if(j+1<image[0].size() && !vis[i][j+1] && image[i][j+1] == oriColor){
                helper(image, i, j+1, oriColor, newColor, vis);
            }
        }
};

int main(){
    vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
    vector<vector<int>> ans;
    Solution s;
    ans = s.floodFill(image, 1, 1, 2);

    for(int i = 0;i<image.size();i++){
        for(int j= 0;j<image[0].size();j++){
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}