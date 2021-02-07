#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, i;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        if(n>k) {
            int d = n%k;
            d = d+k;
            cout << (d/n) + (n%k) << endl;
            continue;
        }
        cout << (k/n) + (k%n) << endl;
    }
}

// Author - Rivetz