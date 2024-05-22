#include<bits/stdc++.h>
using namespace std;

int minopr(const string& S, int N)
{
    int m0 = 0;
    int m1 = 0;
    
    char cc = S[0];
    if (cc == '0')
    {
        ++m0;
    }
    else
    {
        ++m1;
    }
    
    for (int i = 1; i < N; ++i)
    {
        if (S[i] != cc)
        {
            cc = S[i];
            if (cc == '0')
            {
                ++m0;
            }
            else
            {
                ++m1;
            }
        }
    }
    
    return min(m0, m1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        
        cout << minopr(S, N) << endl;
    }
    
    return 0;
}
