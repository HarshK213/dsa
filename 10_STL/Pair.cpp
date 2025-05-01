#include <iostream>
#include <vector>
using namespace std;

int main(){
    pair<int,int> p1 = {1,2};
    cout << p1.first << endl;     // 1
    cout << p1.second << endl;    // 2
    
    pair<string,int> p2 = {"hello",3};
    cout << p2.first << endl;     // hello
    cout << p2.second << endl;    // 3

    pair<int,pair<int,string>> p3 = {1,{4,"H"}};
    cout << p3.first << endl;
    cout << p3.second.first << endl;
    cout << p3.second.second << endl;


    vector<pair<int,string>> vec = {{1,"a"},{2,"b"},{3,"c"}};
    
    vec.push_back({4,"d"});
    vec.emplace_back(5,"e");
    /*
        this is the difference between push_back and emplace_back.
    */
    
    for(pair<int,string> i:vec){
        cout << i.first << " _ " << i.second << endl;
    }


}