#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        for(int i = 0; i < s.length();i++){
            if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        }
        int a[1001] = {0};
        int k = s.length();
        for(int i  = 0; i < k;i++){
            if(s[i] >= 'A' && s[i] <='C') a[i] = 2;
            if(s[i] >= 'D' && s[i] <='F') a[i] = 3;
            if(s[i] >= 'G' && s[i] <='I') a[i] = 4;
            if(s[i] >= 'J' && s[i] <='L') a[i] = 5;
            if(s[i] >= 'M' && s[i] <='O') a[i] = 6;
            if(s[i] >= 'P' && s[i] <='S') a[i] = 7;
            if(s[i] >= 'T' && s[i] <='V') a[i] = 8;
            if(s[i] >= 'w' && s[i] <='Z') a[i] = 9;
        }
        int check = 1;
        for(int i = 0; i < k/2;i++) if(a[i] != a[k-1-i]) check = 0;
        if(check == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}