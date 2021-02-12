#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, i;
    cin >> t;
    while(t--) {
        int ans = 1e5,c=0,a, b;
        cin >> a >> b;
        for (int i = 0; i < sqrt(a); i++)
        {
            int t = a;
            while(t) {
                t = t / (b+i);
                c++;
            }
            ans = min(ans, c); 
        }
        
        cout << ans << endl;
    }
}

// Author - Rivetz