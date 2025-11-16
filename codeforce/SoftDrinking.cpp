#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
	int totalToast = (k*l/nl);
	int limeSlices = (c*d);
	int saltPerToast = (p/np);
	int min1 = min(totalToast, limeSlices);
	int min2 = min(min1, saltPerToast);
	cout << (min2/n) << endl;

	return 0;
}

