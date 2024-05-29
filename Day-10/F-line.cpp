#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long ttl = 0;
    vector<long long> adj;
    
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'L')
        {
            adj.push_back((n - 1 - i) - i);
            ttl += i;
        }
        else
        {
            adj.push_back(i - (n - 1 - i));
            ttl += n - 1 - i;
        }
    }

    sort(adj.rbegin(), adj.rend());

    for (int i = 0; i < n; ++i)
    {
        if (adj[i] > 0)
        {
            ttl += adj[i];
        }
        cout << ttl << ' ';
    }
    cout << '\n';
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
