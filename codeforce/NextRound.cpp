#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, k, minM, ans=0;
	cin >> n >> k;
	vector<int> scores(n,0);
	for(int i = 0;i<n;i++){
		int x;
		cin >> x;
		scores[i] = x;
		if(i==k-1){
			minM = x;	
		}
	}
	for(int i : scores){
		if(i>0 && i>=minM){
			// cout << i << " ";
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
