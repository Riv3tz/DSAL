#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, i;
    cin >> t;
    while(t--) {
        int n;
        int e;
        cin >> n;
        int d; 
        cin >> d;
        vector<int> s;
        for(i = 0; i < n; i++) {
            cin >> e;
            s.push_back(e);
        }
        sort(s.begin(), s.end());

        if(s[0]<=d && s[1]<=d) {
            if(s[0]+s[1] <= d || s[n-1] <= d) cout << "Yes";
            else cout << "No";
        }


        cout << endl;
    }
}
// Author - Rivetz