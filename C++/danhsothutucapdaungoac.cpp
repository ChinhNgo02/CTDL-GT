#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        stack <int> s1;
        int k = 0;
        for(int i = 0; i < s.length();i++) {
            if(s[i] == '(') {
                s1.push(++k);
                cout << k << " ";
            }
            else if(s[i] == ')'){
                cout << s1.top() << " ";
                s1.pop();
            }
        }
        cout << endl;
    }
}