#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, x, sum = 0;
        cin >> n >> x;
        int temp;
        vector<int> arr;
        for (int i = 0; i < n; i++) { cin >> temp; arr.push_back(temp); }

        for (int i = 0; i < n; i++) 
        {
            if (arr[i] % x == 0) {
                for (int j = 0; j < x; j++)
                {
                    arr.push_back(arr[i]/x);
                    n++;
                }
            }
        sum = sum + arr[i];
        }

        cout << sum << endl;

    }
}