#include<bits/stdc++.h>
using namespace std;

void displ(vector<int> a) {
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }  
    cout << endl; 
}

void bblsort(vector<int> a) {
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size() - i; j++)
        {
            if (a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
        
    }
    
}

int main() {
    int t, i;
    cin >> t;
    while(t--) {
        vector<int> a;
        int input;
        while(cin >> input) a.push_back(input);
        
        //method 1
        bblsort(a);
        displ(a);
    }
}