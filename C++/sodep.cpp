#include<bits/stdc++.h>

using namespace std;

long long check(string s){
    int k = s.length();
    for(int i = 0; i < k;i++){
        if(s[i] != s[k-1-i] || (int)s[i] % 2 != 0) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(check(s) == 1) cout << "YES" << endl;
        else cout << "NO" <<endl;
    }
}