#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m,  vector<int>& nums2, int n) {
	vector<int> temp(m+n);
	int i=0, j=0, k=0;
	while(j<m && k<n){
		if(nums1[j] < nums2[k])
			temp[i++] = nums1[j++];
		else
			temp[i++] = nums2[k++];
	}
	while(j<m)
		temp[i++] = nums1[j++];
	while(k<m)
		temp[i++] = nums2[k++];
	while(i--)
		nums1[i] = temp[i];
}

int main() {
	int m, n;
	cin>>m>>n;
	vector<int>nums1(m+n);
	for(int i=0; i<m; ++i)
		cin>>nums1[i];
	vector<int>nums2(n);
	for(int i=0; i<n; ++i)
		cin>>nums2[i];
	merge(nums1, m, nums2, n);

	for(int i=0; i<m+n; ++i)
		cout<<nums1[i]<<" ";
	cout<<'\n';
	return 0;
}
