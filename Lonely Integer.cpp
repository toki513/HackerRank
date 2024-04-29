#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, unique=0, i , j, temp;
	cin>>n;
	int arr[n];

	for(i=0;i<n;i++){
		cin>>arr[i];
	}

	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[j] < arr[i]){
				temp = arr[j];
				arr[j]= arr[i];
				arr[i] = temp;
			}
		}
	} 
	
		for(i=0;i<n;i+=2){
			if(arr[i] == arr[i+1] || arr[i] == arr[i-1]){
				temp=arr[i];
				
			}else{
				unique=arr[i];
				cout<<unique;
			}
		} 
	}