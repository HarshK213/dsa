#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int r,c;
	for(int i = 0;i<5;i++){
		for(int j = 0;j<5;j++){
			int x;
			cin >> x;
			if(x!=0){
				r=i;
				c=j;
			}
		}
	}
	int moves = abs(r-2)+abs(c-2);
	cout << moves << endl;
	return 0;
}
