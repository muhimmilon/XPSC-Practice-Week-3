#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
    }

    vector<pair<int, int>> A,B,C;
    
    for (int i = 0; i < n; ++i)
    {
        A.push_back({a[i], i});
        B.push_back({b[i], i});
        C.push_back({c[i], i});
    }
    
    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    sort(C.rbegin(), C.rend());

    int maxf = 0;

    for (int i = 0; i < min(100, n); ++i)
    {
        for (int j = 0; j < min(100, n); ++j)
        {
            if (A[i].second == B[j].second) continue;
            for (int k = 0; k < min(100, n); ++k)
            {
                if (A[i].second == C[k].second || B[j].second == C[k].second) continue;
                maxf = max(maxf, A[i].first + B[j].first + C[k].first);
            }
        }
    }

    cout << maxf << '\n';
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