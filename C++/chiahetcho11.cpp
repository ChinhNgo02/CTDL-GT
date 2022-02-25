#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        long long sumle = 0, sumchan = 0;
        for(long long i = 0; i < s.length();i++){
            if(i % 2 == 0) sumchan += s[i]-'0';
            else sumle += s[i]-'0';
        }
        long long kq = abs(sumchan-sumle);
        if(kq % 11 == 0) cout << 1 << endl;
        else cout << 0 << endl;
    }
}