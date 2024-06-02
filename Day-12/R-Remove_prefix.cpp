#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    unordered_set<int> asr;
    int minmoves = 0;
    int left = 0;

    for (int right = 0; right < n; ++right)
    {
        while (asr.count(a[right]))
        {
            asr.erase(a[left]);
            left++;
        }
        asr.insert(a[right]);
        minmoves = left;
    }

    cout << minmoves << '\n';
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
