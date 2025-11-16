#include <iostream>
#include <vector>
using namespace std;

int helper(int n, int m, int k, vector<int>& arr){
	int ans = 0;
	for(int i : arr){
		if(i == 1){
			m--;
		}else{
			if(k!=0)k--;
			else m--;
		}
	}
	if(m<0)ans -= m;
	return ans;
}	

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> vec(n);
	for(int i = 0;i<n;i++){
		cin >> vec[i];
	}
	cout << helper(n,m,k,vec) << endl;
	return 0;
}
