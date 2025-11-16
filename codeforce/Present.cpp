#include <iostream>
#include <vector>
using namespace std;

vector<int> helper(const vector<int>& vec, int n) {
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[vec[i] - 1] = i + 1;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<int> ans = helper(vec, n);
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
