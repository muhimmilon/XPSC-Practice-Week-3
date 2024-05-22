#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

int minOperations(int A, int B, int K) {
    // Create a set to keep track of visited values of x
    unordered_set<int> visited;
    
    // Create a queue for BFS
    queue<pair<int, int>> q; // pair(x, operations)
    q.push({A, 0}); // Start from A with 0 operations
    
    while (!q.empty()) {
        int x = q.front().first;
        int operations = q.front().second;
        q.pop();
        
        // If we reach B, return the number of operations
        if (x == B) {
            return operations;
        }
        
        // If x becomes greater than B, we don't need to explore further
        if (x > B) {
            continue;
        }
        
        // Apply the two operations and add them to the queue
        if (x + 1 <= B && visited.find(x + 1) == visited.end()) {
            q.push({x + 1, operations + 1});
            visited.insert(x + 1);
        }
        if ((long long) x * K <= B && visited.find(x * K) == visited.end()) {
            q.push({x * K, operations + 1});
            visited.insert(x * K);
        }
    }
    
    // If B cannot be reached, return -1
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int A, B, K;
        cin >> A >> B >> K;

        cout << minOperations(A, B, K) << endl;
    }

    return 0;
}
