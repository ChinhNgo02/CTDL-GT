#include <bits/stdc++.h>
using namespace std;
//#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
 //   faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        int len=s.length();
        if(s[len-1]=='6'&&s[len-2]=='8')
            cout << "1";
        else 
            cout << "0";
        cout << endl;
    }
    return 0;
}