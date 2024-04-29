// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int a, b , i, j;
// 	int aSum = 0;
// 	int bSum = 0;
// 	int null = 0;
// 	cin>>a>>b;
// 	int alice[a];
// 	int bob[b];

// 	for(i=0;i<a;i++){
// 		cin>>alice[i];
// 	}for(j=0;j<b;j++){
// 		cin>>bob[j];
// 	}
// 	for(int k = 0;k<a;k++){
// 		if(alice[k] > bob[k]){
// 			aSum++;
// 		}else if(alice[k] < bob[k]){
// 			bSum++;
// 		}else if(alice[k] == bob[k]){
// 			null = 0;
// 		}
// 	}
// 		cout<<aSum<<" "<<bSum;
// }

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int aSum = 0, bSum = 0;
    int i ;
    for(i=0;i<3; i++){
        if(a[i]  > b[i]){
            aSum++;
        }else if(a[i] < b[i]){
            bSum++;
        }
    } 
    return {aSum,bSum};
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(3);

    for (int i = 0; i < 3; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    string b_temp_temp;
    getline(cin, b_temp_temp);

    vector<string> b_temp = split(rtrim(b_temp_temp));

    vector<int> b(3);

    for (int i = 0; i < 3; i++) {
        int b_item = stoi(b_temp[i]);

        b[i] = b_item;
    }

    vector<int> result = compareTriplets(a, b);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
