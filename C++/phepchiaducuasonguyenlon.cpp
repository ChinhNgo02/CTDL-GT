#include<bits/stdc++.h>

using namespace std;

long long kq(string s, long long m){
    long long sum = 0;
    for(int i = 0; i < s.length();i++){
        sum = (sum*10 + s[i]-'0') % m;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        long long m;
        cin >> s >> m;
        cout << kq(s, m) << endl;
    }
}