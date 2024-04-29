#include <bits/stdc++.h>
using namespace std;


int main()
{

    string s;
    getline(cin, s);
    cout<<s<<endl;
    int i,count = 0;
    cout<<s.length()<<endl;
    for(i=0;i<s.length();i++){
        if(s[i] == 'a' || 'b'||'c'||'d'|| 'e'||'f' || 'g'||'h'||'i'|| 'j'||'k' || 'l'||'m'||'n'|| 'o'||'p' || 'q'||'r'||'s'|| 't'||'u' || 'v'||'w'||'x'|| 'y'||'z'||'A' || 'B'||'C'||'D'|| 'E'||'F' || 'G'||'H'||'I'|| 'J'||'K' || 'L'||'N'||'M'|| 'O'||'P' || 'Q'||'R'||'S'|| 'T'||'U' || 'V'||'W'||'X'|| 'Y'||'Z'){
                count++;
        } else{count = 0;}
    } cout<<count<<endl;
    if(count== 26) 
        {cout<< "pangram";}
    else{
         cout<<"not pangram";
    return 0;
}
}