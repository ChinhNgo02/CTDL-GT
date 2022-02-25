#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int k = s.length(), dem=0;
        for(int i = 0; i < k-1;i++){
            for(int j = i+1; j < k;j++){
                if(s[i] == s[j]) dem++;
            }
        }
        cout << dem+k << endl;
    }
}