#include <iostream>
#include <string>
using namespace std;

// Function to determine the order and number of times the switches should be pressed
void press_switches(int N, string& states) {
    int rightmost_1 = -1;
    // Find the index of the rightmost bulb in the 1 state
    for (int i = 0; i < N; ++i) {
        if (states[i] == '1') {
            rightmost_1 = i;
        }
    }

    // If there is no bulb in the 1 state, press switch A
    if (rightmost_1 == -1) {
        cout << "1\nA\n";
        return;
    }

    // Press switch B until reaching the leftmost bulb in the 1 state
    for (int i = 0; i <= rightmost_1; ++i) {
        cout << "B";
    }
    cout << "\n";

    // Press switch A to turn on the remaining bulbs
    for (int i = 0; i < N; ++i) {
        cout << "A";
    }
    cout << "\n";
}

int main() {
    int N;
    cin >> N;
    string states;
    cin >> states;

    // Output
    press_switches(N, states);
    return 0;
}
