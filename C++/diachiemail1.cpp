#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n = 0, dd = 1;
    for(int i = s.length()-1;i >= 0;i--){
        if(s[i] == ' '){
            n = i;
            for(int j = i+1; j < s.length();j++){
                if(s[j] >= 'A' && s[j] <= 'Z')  s[j] += 32;
                cout << s[j]; 
            }
            break;
        }
    }
    for(int i = 0; i < n;i++){
        if(s[i] == ' '){
            dd = 1;
        }
        else{
            if(dd == 1){
                if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
                cout << s[i];
            }
            dd =0;
        }
    }
    cout << "@ptit.edu.vn" ;
}