#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int L, V1, V2;
        cin >> L >> V1 >> V2;

        // Calculate the time it takes for the tortoise to finish the race
        double tortoise_time = (double)L / V1;

        // Calculate the time it takes for the hare to finish the race
        double hare_time = (double)L / V2;

        // If the hare's time is less than or equal to the tortoise's time, it can never win
        if (hare_time <= tortoise_time) {
            cout << "-1\n";
        } else {
            // Find the maximum integer time the hare can wait without crossing the tortoise
            int max_wait_time = ceil((hare_time - tortoise_time) / (V2 - V1)) - 1;
            cout << max_wait_time << endl;
        }
    }

    return 0;
}
