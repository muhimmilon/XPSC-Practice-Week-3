#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> g;
vector<ll> cnt;

void dfs(int v, int p)
{
    if (g[v].size() == 1 && g[v][0] == p)
    {
        cnt[v] = 1;
    }
    else
    {
        for (auto u : g[v])
        {
            if (u != p)
            {
                dfs(u, v);
                cnt[v] += cnt[u];
            }
        }
    }
}

void solve()
{
    int n, q;
    cin >> n;

    g.assign(n + 1, vector<int>());

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    cnt.assign(n + 1, 0);
    dfs(1, -1);

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int c, k;
        cin >> c >> k;

        ll res = cnt[c] * cnt[k];
        cout << res << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }

    return 0;
}
