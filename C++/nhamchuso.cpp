#include<bits/stdc++.h>

using namespace std;

long long nn(string s1){
    long long min = 0;
    for(int i = 0; i < s1.length();i++){
        if(s1[i] == '6') s1[i] = '5';
        min = min*10 + s1[i]-'0';
    }
    return min;
}

long long ln(string s2){
    long long min = 0;
    for(int i = 0; i < s2.length();i++){
        if(s2[i] == '5') s2[i] = '6';
        min = min*10 + s2[i]-'0';
    }
    return min;
}

int main(){
        string s1, s2;
        cin >> s1 >> s2;
        cout << nn(s1)+nn(s2) << " " << ln(s1)+ln(s2) << endl;
}