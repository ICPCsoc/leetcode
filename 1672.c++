#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, m;
    cin >> n >> m;
    int a[1000][1000];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
        if (sum > max) {
            max = sum;
        }
    }
    cout << max << endl;
    return 0;
}