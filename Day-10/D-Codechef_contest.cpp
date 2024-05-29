#include<bits/stdc++.h>
using namespace std;

long long calsum(const string &S, int N)
{
    vector<int> prejro(N + 1, 0);
    vector<int> preone(N + 1, 0);
    
    for (int i = 1; i <= N; ++i)
    {
        prejro[i] = prejro[i - 1] + (S[i - 1] == '0' ? 1 : 0);
        preone[i] = preone[i - 1] + (S[i - 1] == '1' ? 1 : 0);
    }

    long long ttl = 0;
    
    for (int L = 1; L <= N; ++L)
    {
        int zeroes = prejro[L];
        int ones = preone[L];
        int substr_len = N - L + 1;
        if (zeroes == ones)
        {
            ttl += 2LL * substr_len;
        }
        else
        {
            ttl += substr_len;
        }
    }

    return ttl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        cout << calsum(S, N) << endl;
    }

    return 0;
}
