#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int element = a[0];
        for (int i = 1; i < n; ++i)
        {
            if (a[i] != element)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
