#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int k = s.length();
        int b[10000] = {};
        for(int i = 0; i < k;i++){
            b[s[i]]++;
        }
        int check = 1;
        for(int i = 0; i < k;i++){
            if( k % 2 == 0 && b[s[i]] > k/2 ){
                check = 0;
            }
            if(k % 2 != 0 && b[s[i]] > (k/2+1)){
                check = 0;
            }
            
        }
        if(check == 1) cout << 1 << endl;
        else cout << 0 << endl;
    }
}