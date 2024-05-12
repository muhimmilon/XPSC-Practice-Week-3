#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    int N;
    cin >> N;
    
    vector<int> price(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> price[i];
    }

    vector<bool> dp(F + 1, false);
    dp[0] = true;

    
    for (int a = 0; a <= A; ++a)
    {
        for (int b = 0; b <= B; ++b)
        {
            for (int c = 0; c <= C; ++c)
            {
                for (int d = 0; d <= D; ++d)
                {
                    for (int e = 0; e <= E; ++e)
                    {
                        for (int f = 0; f <= F; ++f)
                        {
                            int ttl = a + 5 * b + 10 * c + 50 * d + 100 * e + 500 * f;
                            
                            if (ttl <= F && ttl > 0)
                            {
                                dp[ttl] = true;
                            }
                        }
                    }
                }
            }
        }
    }

    
    for (int i = 0; i < N; ++i)
    {
        if (!dp[price[i]])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
