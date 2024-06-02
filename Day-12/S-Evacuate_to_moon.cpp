#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int N, M, H;
        cin >> N >> M >> H;

        vector<int> A(N);
        vector<int> B(M);

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        for (int i = 0; i < M; ++i)
        {
            cin >> B[i];
        }

        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());

        long long ttl = 0;

        for (int i = 0; i < min(N, M); ++i)
        {
            ttl += min((long long)A[i], (long long)B[i] * H);
        }

        cout << ttl << '\n';
    }

    return 0;
}
