#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        unordered_map<int, int> presum;
        int currsum = 0;
        int ans = 0;

        for (int i = 0; i < N; ++i)
        {
            int num;
            cin >> num;

            currsum += num;

            if (currsum % 2 == 0)
            {
                ans = i + 1;
            }
            else
            {
                if (presum.find(currsum % 2) != presum.end())
                {
                    ans = max(ans, i - presum[currsum % 2]);
                }
                else
                {
                    presum[currsum % 2] = i;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
