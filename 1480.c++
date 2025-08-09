#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a[1000], c[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    c[0] = a[0];
    for (int i = 0; i < n; i++) {
        c[i] = c[i - 1] + a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}