//http://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    double n, m, a;
    cin >> n >> m >> a;
    cout << (long long) ceil(n/a)* (long long) ceil(m/a) << endl;
}