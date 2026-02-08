#include <iostream>

using namespace std;



int main() {

    //input
    int p;
    cin >> p;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; ; i++) {
        // i means itne hi minute h
        // cnt karo kitne parathe
        int cnt = 0;
        //cnt karo
        for (int j = 0; j < n; j++) {
            // inside the rank array
            int r = arr[j];
            int sum = r;
            int k = 1;
            while (sum <= i) {
                cnt++;
                k++;
                sum += k * r;
            }
        }
        if (cnt >= p) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}