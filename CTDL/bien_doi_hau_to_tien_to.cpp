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
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
            {
                string a = v.top();
                v.pop();
                string b = v.top();
                v.pop();
                string tmp = s[i]+b+a;
                v.push(tmp);
            }
            else
                v.push(string(1, s[i]));
        }
        cout << v.top() << endl;
    }
}