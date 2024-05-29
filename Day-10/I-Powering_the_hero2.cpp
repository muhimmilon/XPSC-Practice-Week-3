#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    priority_queue<int> bd;
    long long ttlPower = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 0)
        {
            if (!bd.empty())
            {
                ttlPower += bd.top();
                bd.pop();
            }
        }
        else
        {
            bd.push(s[i]);
        }
    }

    cout << ttlPower << '\n';
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
