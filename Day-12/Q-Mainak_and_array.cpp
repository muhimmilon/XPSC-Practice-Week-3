#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int max_diff = a[n - 1] - a[0]; 

        for (int i = 0; i < n - 1; ++i)
        {
            max_diff = max(max_diff, a[i] - a[i + 1]);
        }

        for (int i = 1; i < n; ++i)
        {
            max_diff = max(max_diff, a[n - 1] - a[i]);
        }

        for (int i = 0; i < n - 1; ++i)
        {
            max_diff = max(max_diff, a[i] - a[0]);
        }

        cout << max_diff << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
