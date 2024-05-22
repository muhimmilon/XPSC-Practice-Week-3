#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long A, B, K;
        cin >> A >> B >> K;

        int count = 0;
        while (A < B)
        {
            if (B % K == 0)
            {
                B /= K;
            }
            else
            {
                B--;
            }
            count++;
        }

        cout << count << endl;
    }

    return 0;
}
