#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int helper(vector<int> a, int n){
	int current_len = 1, max_len = 1;
    	for(int i = 1; i < n; i++) {
        	if(a[i] >= a[i-1]) {
	            current_len++;
        	} else {
	            current_len = 1;
        	}
	        max_len = max(max_len, current_len);
	}	
	return max_len;
}


int main(){
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0;i<n;i++){
		cin >> vec[i];
	}
	cout << helper(vec, n) << endl;
	return 0;
}
