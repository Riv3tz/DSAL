#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum = sum + (a[i] * b[i]);
    }
    if(sum == 0) cout << "Yes";
    else cout << "No";
}

// Author - Rivetz