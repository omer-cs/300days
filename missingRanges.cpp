#include<bits/stdc++.h>
using namespace std;
/*
Input	nums = [0,1,3,50,75], lower = 0, upper = 99
Output	[“2”, “4-> 49”, “51-> 74”, “76-> 99”]
*/

string getRange(int n1, int n2) {
	return n1==n2 ?  to_string(n1) : to_string(n1)+"->"+to_string(n2); 
}

vector<string> findRanges(vector<int>& arr, int lower, int upper) {
	vector<string> result;
	int start = lower;

	for(int i=0; i<arr.size() ; ++i) {

		if(i < arr.size()-1  && arr[i] == arr[i+1])
			continue;
		
		if(arr[i] == start) {
			start++;
			continue;
		}

		result.push_back(getRange(start, arr[i]-1));
		start=arr[i]+1;
	}

	if(start<=upper)
		result.push_back(getRange(start, upper));
	return result;
}

int main() {
	int n;
	cin>>n;
	int lower, upper;
	cin>>lower>>upper;
	vector<int>arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	vector<string> strList = findRanges(arr, lower, upper);
	
	for(auto i: strList)
		cout<<i<<" ";
	cout<<'\n';
	return 0;
}
