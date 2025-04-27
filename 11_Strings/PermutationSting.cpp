#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isFrequencySame(int freq1[], int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i] != freq2[i])return false;
    }
    return true;
}

bool checkInclusion(string s1,string s2){
    // s1 -> string whose permutation we have to find.
    // s2 -> string in which we have to find the permutation.

    // step 1. store the frequency of characters of the string which we have to search.
    int freq[26] = {0};
    for(int i = 0;i<s1.length();i++){
        int index = s1[i]-'a';
        freq[index]++;
    }

    // step 2. find the permutation using the sliding window.
    int windowSize = s1.length();

    for(int i = 0;i<s2.length();i++){
        int WindowIdx = 0, index = i;
        int WindowFreq[26] = {0};

        while(WindowIdx < windowSize && index < s2.length()){
            WindowFreq[s2[index]-'a']++;
            WindowIdx++;index++;
        }
        /*
        till this part it will store the frequency of the character of the window.
        */

        // step 3. this will match the frequencies of the window and the s1.
        if(isFrequencySame(freq,WindowFreq))return true;

    }
    return false;
}
int main(){
    // cout << "HELLO WORLD" << endl;

    string s1 = "dsf";
    string s2 = "asdkfhasdhfaudf";
    if(checkInclusion(s1,s2))cout << "Part is present" << endl;
    else cout << "Part is not present" << endl;

    return 0;
}