#include <iostream>

using namespace std;



int main() {

    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
    }
    long long ans = sum;
    // 1e18
    for (int i = 0; i < q; i++) {
        ans *= 2;
        ans %= (1000000007);
    }
    cout << ans << endl;

    return 0;
}