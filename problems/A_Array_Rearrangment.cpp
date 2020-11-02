#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {

        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        int sum = 0, count = n, flag = 0;
        for(int i = 0; i < n; i++) {
            sum = a[i] + b[count - 1];
            count--;
            if(sum > x) flag = 1;
        }
        if(flag == 1) cout << "No" << endl;
        else cout << "Yes" << endl;
    }   
}