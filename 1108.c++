#include "bits/stdc++.h"

using namespace std;

int main (void) {
    char a[100];
    cin >> a;
    char b[1000];
    int c = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '.') {
            b[c++] = '[';
            b[c++] = '.';
            b[c++] = ']';
        }
        else {
            b[c++] = a[i];
        }
    }
    b[c] = '\0';
    cout << b << endl;
    return 0;
}