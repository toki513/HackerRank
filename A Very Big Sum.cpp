#include <bits/stdc++.h>
using namespace std;



int main(){
	long long x , sum = 0;

	int n;
	cin>>n;
	int arr[n];

	for(int i =0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
		cout<<sum;
	}