#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n; 
    cin >> n;
    int b;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> b;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == b) {
                cout << i << ", " << j << endl;
                break;
            }
        }
    }
    return 0;
}