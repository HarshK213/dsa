#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int helper(vector<int> b, vector<int> g, int n, int m){
	int ans = 0;
	sort(b.begin(), b.end());
	sort(g.begin(), g.end());

	int i=0, j=0;
	while(i<n && j<m){
		if(b[i] == g[j] || b[i] == (g[j]+1) || g[j] == (b[i]+1) ){
			ans++;
			i++;
			j++;
		}else if(b[i] < (g[j] + 1)){
			i++;
		}else{
			j++;
		}
	}
	return ans;
}



int main(){
	int b,g;
	cin >> b;
	vector<int> boys(b);
	for(int i = 0;i<b;i++){
		cin >> boys[i];
	}
	cin >> g;
	vector<int> girls(g);
	for(int i = 0;i<g;i++){
		cin >> girls[i];
	}
	cout << helper(boys, girls, b, g) << endl;
	return 0;
}
