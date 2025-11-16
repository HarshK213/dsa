#include <iostream>
#include <vector>
using namespace std;

int helper(vector<int> &vec, int n ,int m){
	for(int i = 0;i<n;i++){
		vec[i] = (vec[i] + m -1) / m;
	}
	int maxEle = -1;
	for(int i : vec){
		if(i>maxEle)maxEle = i;
	}
	int ans = n;
	if(maxEle == 0)return ans;

	for(int i = 0;i<n;i++){
		if(vec[i] == maxEle)ans = i+1;
	}
	return ans;
}


int main(){
	int n,m;
	cin >> n >> m;
	vector<int> vec(n);
	for(int i = 0;i<n;i++){
		cin >> vec[i];
	}
	cout << helper(vec,n,m) << endl;	
	return 0;
}
