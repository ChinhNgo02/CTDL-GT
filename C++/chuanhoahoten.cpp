

#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    getline(cin, s);
    stringstream u;
    string tmp = "";
    string res = "";
    vector<string>t;
    u << s;
    while(u >> tmp){
        t.push_back(tmp);
    }
    for(int i = 0; i < t.size()-1;i++){
        string strS = t[i];
        transform(strS.begin(), strS.end(), strS.begin(), :: tolower);
        strS[0] = toupper(strS[0]);
        res += strS;
        if(i == t.size()-2){
            res += ", ";
        }
        else res += " ";
    }
    string strS = t[t.size()-1];
    transform(strS.begin(), strS.end(), strS.begin(), :: toupper);
    res += strS;
    cout << res << endl;
}