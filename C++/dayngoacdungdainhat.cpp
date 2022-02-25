#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        cin >> s;
        stack< int> v;
       v.push(-1);
        int res = 0;
        for(int i = 0; i < s.length();i++) {
            if(s[i] == '(') {
                v.push(i);
            }
            else {
                v.pop();
                if(v.size() > 0) res = max(res, i - v.top());
                if(v.size() == 0) v.push(i);
            }
        }
        cout << res << endl;
    }
}