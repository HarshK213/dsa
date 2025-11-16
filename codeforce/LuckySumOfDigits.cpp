#include <iostream>
#include <string>
using namespace std;

string helper(int num){
	
    int x = -1, y = -1;
    for (int j = 0; j * 7 <= num; j++) {
        int rem = num - j * 7;
        if (rem % 4 == 0) {
            int i = rem / 4;
            if (x == -1 || i + j < x + y) {
                x = i;
                y = j;
            }
        }
    }

    if (x == -1) return "-1";


    string s(x, '4');
    s += string(y, '7');
    return s;
}


int main(){
	int n;
	cin >> n;
//	for(int i = 1;i<n;i++){
//		cout << i << "   " ;
	cout << helper(n) << endl;

	return 0;
}
