#include <bits/stdc++.h>

using namespace std;

// 3.1 Right Aligned Increasing Triangle
// -------------------------------------
// n = 4

//    *
//   **
//  ***
// ****

// Logic:
// - spaces = n - i
// - stars  = i


int main() {

    int n;
    cin >> n;

    // rows
    for (int i = 1; i <= n; i++) {
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