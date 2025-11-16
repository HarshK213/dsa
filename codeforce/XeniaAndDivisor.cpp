#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	bool invalid = false;
	int count1=0, count2=0, count3=0,count4=0,count6=0;
	for(int i = 0;i<n;i++){
		int x;
		cin >> x;
		if(x==1)count1++;
		else if(x==2)count2++;
		else if(x==3)count3++;
		else if(x==4)count4++;
		else if(x==6)count6++;
		else invalid = true;
	}
	if(invalid){
		cout << "-1" << endl;
		return 0;
	}
		
	//for 124
	int minN1 = min(count1, min(count2,count4));
	count1-=minN1;
	count2-=minN1;
	count4-= minN1;
	
	// for 126
	int minN2 = min(count1, min(count2, count6));
	count1-=minN2;
	count2-=minN2;
	count6-=minN2;

	//for 136
	int minN3 = min(count1, min(count3,count6));
	count1-=minN3;
	count3-=minN3;
	count6-=minN3;

	if(count1 || count2 || count3 || count4 || count6){
		cout << "-1" << endl;
		return 0;
	}

	while(minN1!=0){
		cout << "1 2 4" << endl;
		minN1--;
	}
	while(minN2 != 0){
		cout << "1 2 6" << endl;
		minN2--;
	}
	while(minN3 != 0){
		cout << "1 3 6" << endl;
		minN3--;
	}

	return 0;
}
