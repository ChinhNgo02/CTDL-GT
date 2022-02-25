// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();
//     set<string> ss;
//     for (int i = 1; i <= n; ++i)
//     {
//         string s;
//         getline(cin, s);
//         ss.insert(s);
//     }
//     cout << ss.size();
//     return 0;
// }

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
    for (int i = 0; i < s.size(); i++)
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
            long long c = tinhgt(b, a, s[i]);
            v.push(c);
        }
    }
    return v.top();
}

int main()
{

    string s;
    cin >> s;
    cout << tinh(s) << endl;
}