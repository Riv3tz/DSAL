//unsolved


#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n;
    while(t) {
        t--;
        cin>>n;
        int arr[n], sum = 0; 
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        if (sum!=0)
        {
            cout<<"YES\n";
            for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
            cout<<"\n";
        }
        else cout<<"NO\n";
        
    }
}