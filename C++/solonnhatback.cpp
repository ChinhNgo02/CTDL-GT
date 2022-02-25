#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k;
        string s;
        cin >> k >> s;
        for(int i = 0; i < s.length()-1;i++) {
            int  check = 0, y = i;
            char x = s[i];
            for(int j = i+1; j < s.length();j++){
                if(x < s[j]) {
                    x = s[j];
                    check = 1;
                    y = j;
                }
            }
           if(check == 1){
                swap(s[i], s[y]);
                k--;
           }
           if(k == 0) break;
        }
        cout << s << endl;
    }
}