// Inverted pyramid pattern

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) { // n times rows
        //spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // ith column how much stars? 2 * i - 1
        //stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}