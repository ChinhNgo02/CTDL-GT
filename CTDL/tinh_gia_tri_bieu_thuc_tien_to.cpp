#include <bits/stdc++.h>

using namespace std;

int tinhgt(int a, int b, char c)
{
    if (c == '+')
        return a + b;
    if (c == '-')
        return a - b;
    if (c == '*')
        return a * b;
    if (c == '/')
        return a / b;
}

int tinh(string s)
{
    stack<char> v;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (isdigit(s[i]))
        {
            s[i] -= '0';
            v.push(s[i]);
        }
        else
        {
            int a = v.top();
            v.pop();
            int b = v.top();
            v.pop();
            long long c = tinhgt(a, b, s[i]);
            v.push(c);
        }
    }
    return v.top();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        cout << tinh(s) << endl;
    }
}