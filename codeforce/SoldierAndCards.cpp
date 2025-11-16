#include <iostream>
#include <queue>
#include <vector>
#include <set>
using namespace std;

vector<int> func(queue<int> q){
	vector<int> vec;
	while(!q.empty()){
		vec.push_back(q.front());
		q.pop();
	}
	return vec;
}

void helper(queue<int> &q1, queue<int> &q2){
	int count = 0;
	set<pair<vector<int>, vector<int>>> seen;
	while(!q1.empty() && !q2.empty()){
		
		vector<int> code1 = func(q1);
		vector<int> code2 = func(q2);

		if(seen.count({code1,code2})){
			cout << "-1" << endl;
			return;
		}
		
		seen.insert({code1,code2});

		int num1 = q1.front(), num2 = q2.front();
		q1.pop();
		q2.pop();
		if(num1 > num2){
			q1.push(num2);
			q1.push(num1);
		}else{
			q2.push(num1);
			q2.push(num2);
		}
		count++;
	}
	cout << count << " " << (q2.empty()?"1":"2") << endl;
}

int main(){
	int n, m1, m2;
	cin >> n;
	cin >> m1;
	queue<int> q1, q2;
	for(int i = 0;i<m1;i++){
		int x;
		cin >> x;
		q1.push(x);
	}
	cin >> m2;
	for(int i = 0;i<m2;i++){
		int x;
		cin >> x;
		q2.push(x);
	}
	helper(q1, q2);
	return 0;
}
