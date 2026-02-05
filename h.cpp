// Swastick Pattern

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    // Step - 1
    cout << "#";
    for (int i = 1; i <= (n - 3) / 2; i++) {
        cout << " ";
    }
    for (int i = 1; i <= (n - 3) / 2 + 2; i++) {
        cout << "#";
    }
    cout << endl;
    // Step - 2
    for (int i = 1; i <= (n - 3) / 2; i++) { // rows
        cout << "#";
        for (int j = 1; j <= (n - 3) / 2; j++) {
            cout << " ";
        }
        cout << "#";
        cout << endl;
    }
    // Step - 3
    for (int i = 1; i <= n; i++) {
        cout << "#";
    }
    cout << endl;
    // Step - 4
    for (int i = 1; i <= (n - 3) / 2; i++) { // rows
        for (int j = 1; j <= (n - 3) / 2 + 1; j++) {
            cout << " ";
        }
        cout << "#";
        for (int j = 1; j <= (n - 3) / 2; j++) {
            cout << " ";
        }
        cout << "#";
        cout << endl;
    }
    // Step - 5
    for (int i = 1; i <= (n - 3) / 2 + 2; i++) {
        cout << "#";
    }
    for (int i = 1; i <= (n - 3) / 2; i++) {
        cout << " ";
    }
    cout << "#";
    cout << endl;

    return 0;
}