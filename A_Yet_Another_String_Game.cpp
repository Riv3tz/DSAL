#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, i;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        for(i = 0; i < s.length(); i++) {
            if(s[i] == 'a') s[i] = 'b';
            else s[i] = 'a';
            i++;
            if(s[i] == 'z') s[i] = 'y';
            else s[i] = 'z';
        }
        cout << s << endl;
    }
}

// Author - Rivetz