#include <bits/stdc++.h>

using namespace std;

// 3.2 Right Aligned Decreasing Triangle
// -------------------------------------
// n = 4

// ****
//  ***
//   **
//    *


int main() {

    int n;
    cin >> n;

    // rows
    for (int i = n; i >= 1; i--) {
        //cols
        //spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}