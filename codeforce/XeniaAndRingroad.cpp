#include <iostream>
#include <vector>
using namespace std;

long long helper(const vector<long long>& vec, long long n, long long m) {
    long long curr = 1, ans = 0;
    for (int i = 0; i < m; i++) {
        if (vec[i] >= curr) {
            ans += (vec[i] - curr);
        } else {
            ans += (n - curr) + vec[i];
        }
        curr = vec[i];
    }
    return ans;
}

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> vec(m);
    for (int i = 0; i < m; i++) {
        cin >> vec[i];
    }
    cout << helper(vec, n, m) << endl;
    return 0;
}
