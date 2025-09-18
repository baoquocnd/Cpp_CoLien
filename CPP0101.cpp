
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e9;

void solve(long long n)
{
    cout << (n * (n + 1)) / 2 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        solve(n);
    }
    return 0;
}