#include <bits/stdc++.h>
using namespace std;

int main () {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << (4*n) - (2*i) << " ";
        }
        cout << endl;
    }
}