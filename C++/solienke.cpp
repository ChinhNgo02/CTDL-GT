#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int check = 0;
        for(int i = 0; i < s.length()-1;i++){
            if(abs(s[i]-'0'-s[i+1]+'0') != 1) check = 1;
        }
    
    if(check ==0 ) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    
}