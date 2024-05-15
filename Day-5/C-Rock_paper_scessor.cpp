#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N; 

        string A;
        cin >> A; 

        int maxWins = 0;
        char Move = ' ';

        for (int i = 0; i < N; ++i) {
            if (A[i] != Move) {
                maxWins++;
                Move = A[i];
            } else {
                if (Move == 'R') {
                    Move = 'P';
                } else if (Move == 'P') {
                    Move = 'S';
                } else {
                    Move = 'R';
                }
            }
        }

        cout << maxWins << endl; 
    }

    return 0;
}
