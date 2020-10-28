#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    int x, a;

    while (t) {
        t--;
        cin >> x >> a;
        if (x*2 > a) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}