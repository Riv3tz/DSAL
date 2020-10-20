#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n,f = 0;
    while(t) {
        t--;
        cin>>n;
        int count = 0;
        for(int i = 1; i <= 4; i++) {
            f = f +  10 ^ i;
            if (f < 10000) count++;
        }
        cout<<f<<endl;
    }
}