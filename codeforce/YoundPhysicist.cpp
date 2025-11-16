#include <iostream>
using namespace std;

int main(){
	int t, Ax=0, Ay=0, Az=0;
	cin >> t;
	for(int i = 0;i<t;i++){
		int x,y,z;
		cin >> x >> y >> z;
		Ax += x;
		Ay += y;
		Az += z;
	}
	if(Ax == 0 && Ay == 0 && Az == 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
