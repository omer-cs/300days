#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& arr) {
	int i=0, j=0;
	while(j < arr.size()) {
		if(arr[j] != 0) {
			swap(arr[j], arr[i]);
			i++;
		}
		j++;
	}
}

int main() {
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	moveZeroes(arr);
	
	for(int i=0; i<n; ++i)
		cout<<arr[i]<<" ";
	cout<<'\n';
	return 0;
}
