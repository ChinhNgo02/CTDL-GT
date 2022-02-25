#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    map<string, int>MAP;
    map<string, int> ::iterator key;
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss;
        string res ="";
        string tmp;
        vector<string>list;
        ss << s;
        while(ss >> tmp){
            for(int i = 0; i < tmp.size();i++){
                tmp[i] = tolower(tmp[i]);
            }
            list.push_back(tmp);
        }
        res += list[list.size()-1];
        for(int i = 0; i < list.size()-1;i++){
            res += list[i][0];
        }
        key = MAP.find(res);
        if(key != MAP.end()){
            cout << res << ++MAP[res] << "@ptit.edu.vn" << endl;
        }
        else {
            MAP[res] = 1;
            cout << res << "@ptit.edu.vn" << endl;
        }
    }
}