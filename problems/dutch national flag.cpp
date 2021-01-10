#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, i;
    cin >> t;
    while(t--) {   
        int n; 
        cin >> n;
        vector<int> arr;    
        int input;
        while(cin >> input) arr.push_back(input);
        int low = 0, mid = 0, high = arr.size() - 1;
        while (mid <= high) {
            if (arr[mid] == 0)
            {
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }
            if (arr[mid] == 1)
            {
                /* code */
                mid++;
            }
            else
            {
                swap(arr[mid], arr[high]);
                high--;
                mid++;
            }   
        }
        for (i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        
    }
}