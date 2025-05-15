#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){

/*  MAP     */

    /*
        internally MAP is implemented as a self balancing tree 

        therefore the TC for fucntions like insert erase count is O(log n).
    */

    map<string,int> m;
    m["hello"] = 1;
    m["hi"] = 2;
    m["bye"] = 3;
    m["bye"] = 3;
    m["bye"] = 3;
    m["bye"] = 3;

    /*
        m.insert({}key,value})
        m.emplace(key,value)
        m.count(key);       // it returns the number of keys which have key == givenkey
        m.erase(key)
        m.find(key)         // if key not found we get m.end();  
        m.size();
        m.empty();

        m[key]              // give the value of that key
    */  

    /*
        Map by default sort out data on the basis of its keys
    */

    for(auto i:m){
        cout << i.first << " = " << i.second << endl;
    }
    /*
    output : 
        bye = 3
        hello = 1
        hi = 2
    */

    if(m.find("hi") != m.end())cout << "HI is present" << endl;
    else cout << "HI is not present" << endl;


/*  MULTI MAP   */

    multimap<string,int> mm ;

    mm.emplace("hello", 1);
    mm.emplace("hi", 2);
    mm.emplace("bye", 3);
    mm.emplace("bye", 3);
    mm.emplace("bye", 3);
    mm.emplace("bye", 3);

    mm.erase(mm.find("bye"));   // delete only one bye
    mm.erase("bye");        // delete all bye
    for(auto i:mm){
        cout << i.first << " = " << i.second << endl;
    }
    /*
    output : 
        bye = 3
        bye = 3
        bye = 3
        bye = 3
        hello = 1
        hi = 2
    */


/*  UNORDERED MAP   */

    /*
        similar like map only sigle key, but it doesnt arrange in sorted manner

        the TC for functions like insert erase count is O(1).
    */

    unordered_map<string,int> uom;
    uom.emplace("hi", 2);
    uom.emplace("hello", 1);
     uom.emplace("bye", 3);
    


    for(auto i:uom){
        cout << i.first << "    " << i.second << endl;
    }
    
    return 0;
}