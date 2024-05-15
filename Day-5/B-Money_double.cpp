#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        for (int i = 0; i < Y; ++i)
        {
            if (X < 1000)
            {
                X = X + 1000;
            }
            else
            {
                X = X * 2;
            }
        }

        cout << X << endl;
    }

    return 0;
}
