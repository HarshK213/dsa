#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int minPos(vector<int> vec,int n){
	int minN = INT_MAX, idx = -1;
	for(int i = n-1;i>=0;i--){
		if(vec[i] < minN){
			minN = vec[i];
			idx = i;
		}
	}
	return idx;
}

int maxPos(vector<int> vec, int n){
	int maxN = INT_MIN, idx = -1;
	for(int i = 0;i<n;i++){
		if(vec[i]> maxN){
			maxN = vec[i];
			idx = i;
		}
	}
	return idx;
}

int helper(vector<int> vec, int n){
	int swap = 0;
	int minP = minPos(vec,n);
	int maxP = maxPos(vec,n);
//	cout << minP << "  " << maxP << endl;
	if(minP < maxP){
		swap = maxP + (n-1-minP)-1;
	}else{
		swap = maxP + (n-1-minP);
	}
	return swap;
}

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i = 0;i<n;i++){
        cin >> height[i];
    }
    cout << helper(height ,n) << endl;
    return 0;
}
