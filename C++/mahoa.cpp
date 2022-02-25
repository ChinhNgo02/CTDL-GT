#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int b[101] = {0};
        for(int i = 0; i < s.length();i++) b[s[i]]++;
        for(int i = 0; i < s.length();i++){
            if(b[s[i]] != 0){
                cout << s[i] << b[s[i]];
                b[s[i]] = 0;
            }
        }
        cout << endl;
    }
}