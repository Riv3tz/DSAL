//This method only works when the elements of the array do not exceed 
//The size of the array

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, i;
    cin >> t;
    while(t--) {
        vector<int> nums;
        int input;
        while(cin >> input) nums.push_back(input);
        
        int tortoise = nums[0];
        int hare = nums[0];
    do {
      tortoise = nums[tortoise];
      hare = nums[nums[hare]];
    } while (tortoise != hare);

    tortoise = nums[0];
    while (tortoise != hare) {
      tortoise = nums[tortoise];
      hare = nums[hare];
    }

    cout << hare;
    }
}

// Author - Rivetz