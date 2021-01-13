#include<bits/stdc++.h>
using namespace std;

void check(int a, int b) {
    if(a+3 <= b) cout << "No";
    else cout << "Yes";
}

int main() {
    int l, s;
    cin >> s >> l;
    
    if (s<l) check(s,l);
    else check(l,s);
}

// Author - Rivetz