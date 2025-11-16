#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> helper(vector<int> &vec, int n){
	map<int,int, greater<int>> um;
	for(int i : vec){
		um[i]++;
	}
	unordered_map<int,int> rankingpos;
	int st = 1;
	for(auto i : um){
		rankingpos[i.first] = st;
		st+=i.second;
	}
	for(int i = 0;i<n;i++){
		vec[i] = rankingpos[vec[i]];
	}
	return vec;
}

int main(){
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0;i<n;i++){
		cin >> vec[i];
	}
	vector<int> ans = helper(vec,n);
	for(int i : ans){
		cout << i << " ";
	}
	return 0;
}
