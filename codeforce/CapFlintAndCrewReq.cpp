#include <iostream>
#include <vector>
using namespace std;

void helper(int n)
{
    if (n <= 30)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        if (n == 36 || n == 40 || n == 44)
        {
            cout << 6 << ' ' << 10 << ' ' << 15 << ' ' << n - 31 << endl;
        }
        else
        {
            cout << 6 << ' ' << 10 << ' ' << 14 << ' ' << n - 30 << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        helper(n);
    }
    return 0;
}