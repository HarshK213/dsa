#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec ;
    vector<int> vec1 = {1,2,3};
    vector<int> vec2(/*size, value*/10,-1);
    vector<int> vec3(vec2);


    // all below function have O(1) TC.

    vec.size();             
    vec.capacity();

    vec.push_back(1);
    vec.emplace_back(2);

    vec.pop_back();

    vec.at(/*index*/1);
    vec[1];

    vec.front();
    vec.back();




    // all below functions are expensive functions.
    vec2.erase(vec.begin());
    vec2.erase(vec.begin()+2);
    vec2.erase(vec.begin(),vec.begin()+2);


    vec1.insert(/* position,value*/vec1.begin()+2,7);

    vec1.clear();   //-> empty the vector       - doesn't affect capacity.

    vec1.empty();   //-> return wheather an vector is empty or not.




    // below are vector Iterator
    vec.begin();
    vec.end();      /* it always point at nth position value not at n-1 position (vector size is n). */

    vec.rbegin();    /* it point at the n-1 index */
    vec.rend();     /* it point at the value just before the 0th index */

    vector<int>::iterator i;
    for(i = vec.begin();i!=vec.end();i++){
        cout << *(i) << endl;
    }


    for(auto i = vec.rbegin();i!=vec.rend();i++){
        cout << *(i) << endl;
    }




    return 0;
}