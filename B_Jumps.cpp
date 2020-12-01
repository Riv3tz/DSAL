#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int dest; 
        cin >> dest;
        int pos = 0, jum = 0;
        while (pos < dest) {
            jum++;
            pos = pos + jum;
        }
        if (pos == dest) cout << jum << endl;
        else {
            jum = pos - dest + jum;
            cout << jum << endl;
        }
    }
}


