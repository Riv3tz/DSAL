#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> a;
    int input;
    while (cin >> input) a.push_back(input);
    // Method 1 lol
    // sort(a.begin(), a.end());
    int count[10];
    for(int i = 0; i < a.size(); i++) count[a[i]]++;
    
}