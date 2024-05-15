#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;

    int cal = 2 * (X + Y);

    if (cal >= 1000)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
