#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        int totalPoints = p1 + p2 + p3;

        // Check if the sum of points is even
        if (totalPoints % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        int totalGamesPoints = totalPoints / 2;

        // Check if scores are feasible
        if (p3 > totalGamesPoints) {
            cout << -1 << endl;
            continue;
        }

        // Calculate the maximum number of draws
        int maxDraws = totalGamesPoints - p3;
        cout << maxDraws << endl;
    }

    return 0;
}
