#include <iostream>
#include <string>
using namespace std;

// Function to compare T-shirt sizes
char compareSizes(string a, string b) {
    // Extract the size and degree from the strings
    char sizeA = a.back();
    char sizeB = b.back();

    // Remove the degree part from the strings
    a.pop_back();
    b.pop_back();

    // Compare the sizes
    if (sizeA == 'M') {
        if (sizeB == 'S' || sizeB == 'X')
            return '>';
        else if (sizeB == 'L')
            return '<';
        else
            return '=';
    } else if (sizeA == 'S') {
        if (sizeB == 'M')
            return '<';
        else
            return '<';
    } else if (sizeA == 'L') {
        if (sizeB == 'M')
            return '>';
        else
            return '>';
    }

    return '?'; // Invalid case
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        string a, b;
        cin >> a >> b; // Input T-shirt sizes
        char result = compareSizes(a, b);
        cout << result << endl;
    }

    return 0;
}
