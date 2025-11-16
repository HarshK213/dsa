#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void helper(vector<long long> &vec, int n){
	sort(vec.begin(),vec.end());
	long long min = vec[0],max = vec[n-1], countMin = 0,countMax =0;
	for(int i = 0;i<n;i++){
		if(vec[i] == min)countMin++;
		if(vec[i] == max)countMax++;
	}
	long long combi, dif;
	if(max == min){
		combi = (1LL*n*(n-1))/2, dif = 0;
	}
	else{
		dif = max-min, combi = countMin*countMax;
	}
	cout << dif << " " << combi << endl;
}

int main(){
	int n;
	cin >> n;
	vector<long long> vec(n);
	for(int i= 0;i<n;i++){
		cin >> vec[i];
	}
	helper(vec,n);
	return 0;
}
