#include <bits/stdc++.h>

using namespace std;

int check(char c) {
    if(c == '^')
        return 5;
    else if(c == '*' || c == '/')
        return 4;
    else if(c == '+' || c == '-' )
        return 3;
    return 2;
}

void Solve() {
    string s, res = "";
    cin >> s;
    stack<char>v;
    for( int i = 0; i < s.size(); i++ ){
        if(s[i] >= 'A' && s[i] <= 'Z') res += s[i];
        else if(s[i] >= 'a' && s[i] <='z') res += s[i];
        else if(s[i] == '(') v.push(s[i]);
        else if(s[i] == ')') {
            while(v.size()  && v.top() != '(') {
                res += v.top();
                v.pop();
            } 
            v.pop();
        }
        else if(s[i] == '^' || s[i] == '*' || s[i] == '/' || s[i] == '-' || s[i] == '+') {
            while(v.size() && check(v.top()) >= check(s[i])) {
                res += v.top();
                v.pop();
            }
            v.push(s[i]);
        }
    }
    while (v.size())
    {
        if (v.top() != '(')
            res += v.top();
        v.pop();
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
}