#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void solveTestCase() {
    int n;
    cin >> n;
    
    vector<vector<int>> sequences(n, vector<int>(n-1));
    unordered_map<int, int> countMap;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-1; ++j) {
            cin >> sequences[i][j];
            countMap[sequences[i][j]]++;
        }
    }
    
    vector<int> originalPermutation(n);
    int index = 0;
    
    for (int i = 1; i <= n; ++i) {
        if (countMap[i] == n-1) {
            originalPermutation[index++] = i;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        unordered_map<int, int> tempMap = countMap;
        for (int j = 0; j < n-1; ++j) {
            tempMap[sequences[i][j]]--;
        }
        
        for (int j = 1; j <= n; ++j) {
            if (tempMap[j] == 0) {
                originalPermutation[n-1] = j;
                break;
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << originalPermutation[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solveTestCase();
    }
    
    return 0;
}
