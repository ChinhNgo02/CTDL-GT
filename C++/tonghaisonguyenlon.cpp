#include<bits/stdc++.h>

using namespace std;

string tong(string s1, string s2){
    string res = " ";
    while(s1.length() < s2.length()) s1 = "0" + s1;
    while(s1.length() > s2.length()) s2 = "0" + s2;
    int nho = 0;
    for(int i = s1.length()-1;i >= 0;i--){
        int tmp = s1[i] - 48 + s2[i] - 48 + nho;
        nho = tmp /10;
        tmp = tmp%10;
        res = (char)(tmp+48)+res;
    }
    if(nho > 0) res ="1" + res;
    return res;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << tong(s1, s2) << endl;
    }
}

