#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b , i, j;
	int aSum = 0;
	int bSum = 0;
	int null = 0;
	cin>>a>>b;
	int alice[a];
	int bob[b];

	for(i=0;i<a;i++){
		cin>>alice[i];
	}for(j=0;j<b;j++){
		cin>>bob[j];
	}
	for(int k = 0;k<a;k++){
		if(alice[k] > bob[k]){
			aSum++;
		}else if(alice[k] < bob[k]){
			bSum++;
		}else if(alice[k] == bob[k]){
			null = 0;
		}
	}
		cout<<aSum<<" "<<bSum;
}