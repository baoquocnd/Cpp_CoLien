#include <bits/stdc++.h>
using namespace std;

int snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
void solve()
{
    vector<int> a(205, 0);
    int n; cin >> n; int b[n]; int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] > max) max = b[i];
        ++a[b[i]];
    }
    int ok = 0;
    for (int i = 1; i <= max; i++)
    {
        if (a[i] == 0 && snt(i))
        {
            cout << i << " ";
            ok = 1;
        }
    }
    if (ok == 0)
        cout << "Yes";
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}