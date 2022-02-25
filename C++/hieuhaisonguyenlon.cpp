#include<bits/stdc++.h>

using namespace std;

string tong(string s1, string s2){
    string res = " ";
    while(s1.length() < s2.length()) s1 = "0" + s1;
    while(s1.length() > s2.length()) s2 = "0" + s2;
    int nho = 0;
    if(s1 > s2) swap(s1, s2);
    for(int i = s1.length()-1;i >= 0;i--){
        int tmp = s2[i] - 48 - s1[i] + 48 - nho;
        if(tmp < 0){
            res = (char)(tmp + 10 + 48) + res;
            nho = 1;
        }
        else{
            res = (char)(tmp + 48) + res;
            nho = 0;
        }
    }
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