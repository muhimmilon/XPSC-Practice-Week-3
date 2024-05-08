#include <iostream>
#include <vector>
using namespace std;

bool isOdd(long long int x) {
    return x % 2 != 0;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long int> a(n);
        long long int sum = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            
            long long int diff = (r - l + 1) * k;
            if ((sum + diff) % 2 == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    
    return 0;
}
