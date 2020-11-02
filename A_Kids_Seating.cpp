#include <bits/stdc++.h>
using namespace std;

int main () {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int prime = 0;
        int s = 4*n;
        for (int i = 3; i <= s; i++) {
            for (int j = 2; j < sqrt(i); j++) {
                if ( i % j == 0 ) prime = -1;
            }
            if (prime == 0) {
                cout << i << " ";
                n--;
            }
        if (n == 0) break;
        }
        cout << endl;
    }
}