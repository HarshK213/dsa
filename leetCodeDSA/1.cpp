/* TWO SUM */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> & arr, int tar) {
  unordered_map<int, int> m;
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    int first = arr[i];
    int sec = tar - first;

    if (m.find(sec) != m.end()) {
      return {m[sec], i};
    }
    m[first] = i;
  }
  return {-1, -1};
}
