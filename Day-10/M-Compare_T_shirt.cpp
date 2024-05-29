#include<bits/stdc++.h>
using namespace std;

char cmp(const string& a, const string& b)
{
    if (a == "M" && b == "M") return '=';
    if (a == "M") return b.find('L') != string::npos ? '<' : '>';
    if (b == "M") return a.find('L') != string::npos ? '>' : '<';

    if (a.back() == 'S' && b.back() == 'S')
    {
        return a.size() == b.size() ? '=' : (a.size() > b.size() ? '<' : '>');
    }

    if (a.back() == 'L' && b.back() == 'L')
    {
        return a.size() == b.size() ? '=' : (a.size() > b.size() ? '>' : '<');
    }

    return a.back() == 'S' ? '<' : '>';
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << cmp(a, b) << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
