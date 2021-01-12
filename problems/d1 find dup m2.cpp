#include<bits/stdc++.h>
using namespace std;

int inp(set<int> &myset) {
    int input;
    while(cin >> input) {
        if(myset.count(input) > 0) return input;
        myset.insert(input);
    }
    return -1;
}

int main() {
    int t, i;
    cin >> t;
    while(t--) {
        set<int> s;
        cout << inp(s);
    }
}

// Author - Rivetz