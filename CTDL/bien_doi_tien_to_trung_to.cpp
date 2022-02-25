#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<string> v;
        int len = s.length();
        for (int i = len - 1; i >= 0; i--)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
            {
                string a = v.top();
                v.pop();
                string b = v.top();
                v.pop();
                string tmp = "(" + a + s[i] + b + ")";
                v.push(tmp);
            }
            else
                v.push(string(1, s[i]));
        }
        cout << v.top() << endl;
    }
}