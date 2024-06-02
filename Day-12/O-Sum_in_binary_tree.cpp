#include<bits/stdc++.h>
using namespace std;

long long sumcal(long long n)
{
    long long sum = 0;
    while (n > 0)
    {
        sum += n;
        n /= 2;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    vector<long long> anss(t);

    for (int i = 0; i < t; ++i)
    {
        long long n;
        cin >> n;
        anss[i] = sumcal(n);
    }

    for (const auto &result : anss)
    {
        cout << result << endl;
    }

    return 0;
}
