#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCoins(int n) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0; // Base case

    // Consider coins of value 3 and 5
    for (int coin : {3, 5}) {
        for (int i = coin; i <= n; ++i) {
            if (dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[n];
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Amount to pay
        cout << minCoins(n) << endl;
    }

    return 0;
}
