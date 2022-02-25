#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        string res = "";
        string strS = "";
        for(int i = 0; i < s.length();i++){
            if(s[i] >= '0' && s[i] <= '9') res += s[i];
            else strS += s[i];
        }
        for(int i = 0; i < strS.length();i++){
            for(int j = i+1; j < strS.length();j++){
                if(strS[i] > strS[j]) swap(strS[i], strS[j]);
            }
        }
        long long sum = 0;
        for(int i = 0; i < strS.length();i++) cout << strS[i]; 
        for(int i = 0; i < res.length();i++){
            sum += res[i] -'0';
        }
        cout << sum << endl;
    }
}