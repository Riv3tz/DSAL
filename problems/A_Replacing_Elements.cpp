#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,i; 
    cin >> t;
    while(t--) {
        int n, d,f=1;
        cin >> n;
        cin >> d;
        vector<int> a;
        for (i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if(temp > d) f = 0;
            a.push_back(temp);
        }
        if(f) {
            cout << "YES\n";
            continue;
        }
        sort(a.begin(), a.end());
        if(a[0] + a[1] > d) cout << "NO\n";
        else cout << "YES\n";
    }
}
// Author - Rivetz