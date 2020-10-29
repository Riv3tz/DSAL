#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    float t, n, count = 0;
    cin >> t;
    while (t) {
        t--;
        cin >> n >> s;
        for (int i = 0; i < n-1; i++) {
            if ( s[i] == s[i+1] ) count++;
        }
        cout << ceil(count/2) << endl;
        count = 0;
    }
}