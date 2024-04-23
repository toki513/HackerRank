#include <bits/stdc++.h>
using namespace std;


string angryProfessor(int k, int a[], int size){
	int n=0;
	int i;

	for(i = 0; i<size; i++){
		if(a[i] <= 0){
			n++;
		}
	} if(n>=k){
		return "NO\n";
		cout<<endl;
	}else
		return "YES\n";

}
 int main(){

	int test=0;
	cin>>test;
	for(int i = 0;i<test; i++){
		int n,k,j,total = 0;
		cin>>n>>k;
		int a[n];
		for(j=0;j<n;j++){
			cin>>a[j];
	 
} cout<<angryProfessor(k,a,n);
}
}