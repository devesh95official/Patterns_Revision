#include <iostream>

using namespace std;



int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int a, k;
        cin >> a >> k;

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a % arr[i] == 0)cnt++;
        }
        if (cnt >= k)cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}