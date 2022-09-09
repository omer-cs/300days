#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
	vector<int> result;
	int carry = 1;
	int n = digits.size()-1;

	for(int i=n; i>=0; --i) {
		if(digits[i]+carry == 10) {
			result.push_back(0);
			carry = 1;
		}
		else {
			result.push_back(digits[i]+carry);
			carry = 0;
		}
	}
   
	if(carry == 1)
		result.push_back(1);
	reverse(result.begin(), result.end());
	return result;
}


int main() {
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	vector<int> result = plusOne(arr);

	for(auto i: result)
		cout<<i<<" ";
	cout<<'\n';
	return 0;
}
