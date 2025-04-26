#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void brute(vector<int>& arr){
    sort(arr.begin(),arr.end());
}

void optimize(vector<int>& arr){
    int countZ = 0,countO = 0, countT = 0;
    for(int i:arr){
        if(i==0)countZ++;
        else if(i==1) countO++;
        else countT++;
    }
    // cout<< "0:" << countZ << "  1:" << countO << "   2:" << countT << endl; 
    int idx=0;
    for(int i =0;i<countZ;i++){
        arr[idx] =0;
        idx++;
    }
    for(int i=0;i<countO;i++){
        arr[idx] =1;
        idx++;
    }
    for(int i=0;i<countT;i++){
        arr[idx]=2;
        idx++;
    }   
}


// this is known as dutch national flag algorithm
void Optimal(vector<int>& arr){
    int l = 0, m=0,h=arr.size()-1;
    while(m<=h){
        if(arr[m] == 0){
            swap(arr[m++],arr[l++]);
        }
        if(arr[m] == 1) m++;
        if(arr[m] == 2) swap(arr[m],arr[h--]);
    }
}

int main(){
    vector<int> vec = {2,0,2,1,1,0,1,2,0,0};

    for(int i:vec){
        cout << i << " ";
    }
    cout << endl;

    // brute(vec);
    // optimize(vec);
    Optimal(vec);

    for(int i:vec){
        cout << i << " ";
    }

}