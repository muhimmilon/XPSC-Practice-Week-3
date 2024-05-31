#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long sum = 0;
        int op = 0;
        bool negtv = false;

        for (int i = 0; i < n; ++i)
        {
            sum += abs(a[i]);
            if (a[i] < 0)
            {
                if (!negtv)
                {
                    op++;
                    negtv = true;
                }
            } else if (a[i] > 0 || (i > 0 && a[i] == 0 && a[i-1] > 0))
            {
                negtv = false;
            }
        }

        cout << sum << " " << op << '\n';
    }

    return 0;
}
