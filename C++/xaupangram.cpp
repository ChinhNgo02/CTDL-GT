#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        int k, dem = 0;
        cin >> s >> k;
        int h = s.length(), b[100000] = {0};
        for(int i = 0; i < h;i++) b[s[i]]++;
        for(int i = 0; i < h;i++){
            if(b[s[i]] != 0){
                dem++; 
                b[s[i]] = 0;
            }
        }
        int c = 26-dem;
        if(c > k) cout << 0 << endl;
        else cout << 1 << endl;
    }
}