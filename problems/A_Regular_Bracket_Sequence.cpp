#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int l = s.length();
        int open = 0, close = 0;
        for(int i = 0; i < l; i++) {
            if (s[i] == '(' ) open++;
            if (s[i] == ')' ) close++;
            if (s[i] == '?') {
                if (open <= close) open++;
                else close ++;
            }
            if (close > open) break; 
        }
        if(open == close) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}