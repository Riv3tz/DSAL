#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, n;
    cin >> t;
    int p;
    while (t--)
    {
        cin >> n;
        int even = 0, odd = 0;
        n *= 2;
        for (i = 0; i < n; i++)
        {
            cin >> p;
            if (p % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even == odd)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}

// Author - Rivetz