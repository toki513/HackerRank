#include <bits/stdc++.h>
using namespace std;

void removeDup(char str[], int n){
    int i, j , index = 0;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(str[i] == str[j])
                break;
        }
        if(j==i){
            index++;
    }
    }   
    cout<<index<<endl;
    if(index == 26){
        cout<<"Pnagrams";
    }
        else{
            cout<<"Not Pangrams";
        }
    }

int main()
{

    char str[] = "a quick brown fox jumps over the lazy dog";
    int n = sizeof(str)/sizeof(str[0]);

    removeDup (str, n);
}
