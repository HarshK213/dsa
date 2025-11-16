#include <iostream>
using namespace std;

int main(){
	int n;
	double sum=0;
	cin >> n;
	for(int i = 0;i<n;i++){
		double x;
		cin >> x;
		sum += (x/100);
	}
	cout << ((sum/n)*100) << endl;
	return 0;
}
