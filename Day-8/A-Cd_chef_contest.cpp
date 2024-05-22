#include<bits/stdc++.h>
using namespace std;

int min(int X, int Y)
{
    int ttl = X + Y;
    
    for (int draw = 0; draw <= ttl; ++draw)
    {
        int rmain = ttl - 2 * draw;
        if (rmain % 3 == 0)
        {
            return draw;
        }
    }
    return 0;
}

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        cout << min(X, Y) << endl;
    }
    
    return 0;
}
