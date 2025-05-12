#include <iostream>
#include <vector>
using namespace std;

vector<int> findEvenNumbers(vector<int>& digits) {
    vector<int> result;
    vector<int> freq(10, 0);

    for (int d : digits) freq[d]++;

    for (int num = 100; num <= 998; num += 2) {
        int a = num / 100;
        int b = (num / 10) % 10;
        int c = num % 10;

        vector<int> freqC = freq;
        if (--freqC[a] >= 0 && --freqC[b] >= 0 && --freqC[c] >= 0) {
            result.push_back(num);
        }
    }

    return result;
}
