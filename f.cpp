// diamond pattern // in a single for loop

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++) { // 2 * n - 1 times rows
        if (i <= n - 1) {
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
        }
        else {
            for (int j = 1; j <= i - n; j++) {
                cout << " ";
            }
            for (int j = 1; j <= 2 * n - 1 - 2 * (i - n) ; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }


    return 0;
}
