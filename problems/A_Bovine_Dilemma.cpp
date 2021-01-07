#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t; while(t--) {
        int n; cin >> n;
        int arr[n], d[n];
        int diff = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            d[i] = 0;
        }
        for (int i = 0; i < n-1; i++) 
        {
            for (int j = i+1; j < n; j++)
            {
                diff = arr[i] - arr[j];
                if(diff < 0) diff = -diff; 
                d[diff]++;
            }
        }
        for(int i = 0; i < n; i++) {
            if (d[i] > 0) count++;
        }
        cout << ++count << endl;
    }
}