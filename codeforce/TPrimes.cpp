#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

const int MAX = 1000000;
vector<bool> is_prime(MAX + 1, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        long long root = sqrtl(x);
        if (root * root == x && is_prime[root])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
