#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int>& arr) {
	for(auto i: arr)
		cout<<i<<" ";
	cout<<'\n';
}

void reverseArray(vector<int>& arr, int left, int right) {
	int temp;
	while(left < right) {
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

void leftRotateArray(vector<int> &arr, int k) {
	k %= arr.size();
	int n = arr.size();
	reverseArray(arr, 0, n-1);
	reverseArray(arr, k, n-1);
	reverseArray(arr, 0, k-1);
}

void rightRotateArray(vector<int> &arr, int k) {
	k %= arr.size();
	int n = arr.size();
	reverseArray(arr, 0, n-1);
	reverseArray(arr, 0, k-1);
	reverseArray(arr, k, n-1);
}

void rotateIterative(vector<int> &arr, int k) {
	int n = arr.size();
	k %=n;
	vector<int> temp(n);
	for(int i=0; i<n; ++i) {
		temp[(i+k)%n] = arr[i];
	}
	arr = temp;
}

int main() {
	
	int n;
	cin>>n;
	vector<int>arr(n);

	for(int i=0; i<n; ++i)
		cin>>arr[i];
	
	int k;
	cin>>k;
	
	rightRotateArray(arr, k);
	//rotateIterative(arr, k);
	
	printArray(arr);
	

	return 0;
}
