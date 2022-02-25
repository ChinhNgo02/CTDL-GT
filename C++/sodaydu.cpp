#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int b[1500] ={0}, check = 0;
        for(int i = 0; i < s.length();i++){
            if(s[0] == '0'){
                cout << "INVALID" << endl;
                check = 1;
                break;
            }
            else if(s[i] < '0' || s[i] > '9'){
                cout << "INVALID" << endl;
                check = 1;
                break;
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                b[s[i]]++;
            }
        }
        int dem = 0;
        if(check == 0){
        for(int i = 0; i < s.length();i++){
            if(b[s[i]] != 0){
                dem++;
                b[s[i]] = 0;
            }
        }
        if(dem == 10) cout << "YES" << endl;
        else cout << "NO" << endl;
        }
    }
}