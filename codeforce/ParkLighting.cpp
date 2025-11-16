#include <iostream>
using namespace std;

void helper(int row, int col){
	int ans = 0;
	ans += row*(col/2);
	col = col%2;
	if(col == 1){
		ans += (row/2)*col;
		row = row%2;
		if(row == 1){
			ans++;
		}
	}
	cout << ans << endl;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		int row,col, ans = 0;	
		cin >> row >> col;
		helper(row,col);
	}
	return 0;
}
