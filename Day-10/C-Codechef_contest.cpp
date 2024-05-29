#include<bits/stdc++.h>
using namespace std;

int countcells(const string& S)
{
    set<pair<int, int>> cells;
    cells.insert({0, 0});
    
    int minx = 0, maxx = 0;
    int miny = 0, maxy = 0;
    
    if (S[0] == '1') minx = -10; // L
    if (S[1] == '1') maxx = 10;  // R
    if (S[2] == '1') maxy = 10;  // U
    if (S[3] == '1') miny = -10; // D
    
    for (int x = minx; x <= maxx; ++x)
    {
        for (int y = miny; y <= maxy; ++y)
        {
            cells.insert({x, y});
        }
    }
    
    return cells.size();
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        cout << countcells(S) << endl;
    }
    return 0;
}