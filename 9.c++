#include "bits/stdc++.h"

using namespace std;

int main (void){
    int n;
    cin >> n;
    if (n < 0) {
        cout << "false" << endl;
    }
    else {
        int a = n;
        int sum = 0;
        while (n > 0){
            int sum1 = n % 10;
            sum = sum * 10 + sum1;
            n /= 10;
        }
        if (a == sum) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
    }
    return 0;
}