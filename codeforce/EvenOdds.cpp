#include <iostream>
using namespace std;

int main(){
	long long n,pos;
	cin >> n >> pos;
	if(n%2 == 0){
		if(pos > n/2){
			cout << ((pos-n/2)*2) << endl;
		}else{
			cout << (pos*2 -1) << endl;
		}
	}else{
		if(pos >((n/2)+1)){
			cout << ((pos-((n/2)+1))*2) << endl;
		}else{
			cout << (pos*2-1) << endl;
		}
	}
	return 0;
}

	
