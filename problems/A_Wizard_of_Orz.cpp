#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, i;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        i = n;
        string s;
        int dig = 9;
        int count = 1;
        while(i--) {
            s[n/2 - count] = to_char(dig);
            dig--;
            if(dig == -1) dig = 9;
        }
        cout << s << endl;
    }
}