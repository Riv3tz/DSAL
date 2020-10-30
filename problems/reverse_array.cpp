#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[], int size) {
	for(int j = 0; j < size; j++) cout << arr[j] << " ";
	cout << endl;
}

void rev (int arr[], int start, int end) {
	if (start>=end) return;
	int temp = arr[start];
	arr[start] = arr[end]; 
	arr[end] = temp;
	rev(arr, start+1, end-1);
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	rev(arr, 0, n-1);
	printarr(arr, n);
}