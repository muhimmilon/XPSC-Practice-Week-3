#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    long long count = 0;
    int lngth = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= q)
        {
            lngth++;
        }
        else
        {
            if (lngth >= k)
            {
                count += (long long)(lngth - k + 1) * (lngth - k + 2) / 2;
            }
            lngth = 0;
        }
    }

    if (lngth >= k)
    {
        count += (long long)(lngth - k + 1) * (lngth - k + 2) / 2;
    }

    cout << count << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
