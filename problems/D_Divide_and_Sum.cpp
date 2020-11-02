#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0;i < n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
    
    for(int i = 0; i < n; i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(b[i]<b[j])
			{
				int temp = b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
    
    long int cost = 0;
    int temp;
    for (int i = 0; i < n; i++) {
        temp = a[i] - b[i];
        if(temp < 0) temp -= temp;
        cost += temp;
    }
    cout << cost;
}