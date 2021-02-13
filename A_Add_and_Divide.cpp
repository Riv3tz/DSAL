#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, i;
    cin >> t;
    while(t--) {
        long long int ans = 1e18,c=0,a, b;
        cin >> a >> b;
        for(i = 0; i*i <= a; i++) {
            if(b==1 && i==0) continue;
            c = i;
            long long int tmp = a;
            while(tmp){
                tmp = tmp / (b+i);
                c++;
            }
            ans = min(ans, c);
        }
        cout << ans << endl;
    }
}

// Author - Rivetz