#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    int l, r, size;
    bool ans = false;
    while (t) {
        t--;
        cin >> l >> r;
        for (size = 1; size < l; size++) {
            if (( l % size ) == 0) {
                cout << "YES" << endl;
                ans = true;
            }
        
        }
    }
}