#include <bits/stdc++.h>
using namespace std;


int main(){
	double positive = 0;
	double negative = 0;
	double null = 0;
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];

		if(arr[i] > 0){
			positive++;
		}else if(arr[i] < 0){
			negative++;
		}else if(arr[i] == 0){
			null++;
		}
	} 
	cout<<fixed<<setprecision(6);
	cout<<positive/n<<"\n";
	cout<<negative/n<<'\n';
	cout<<null/n<<"\n";
}