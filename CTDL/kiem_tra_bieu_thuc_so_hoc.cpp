#include <bits/stdc++.h>

using namespace std;
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
        getline(cin, s);
        stack<char> v;
        int check;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ')')
            {
                check = 1;
                int top = v.top();
                // cout << top << endl;
                v.pop();
                while (top != '(')
                {
                    if (top == '+' || top == '*' || top == '/' || top == '-')
                        check = 0;
                    top = v.top();
                    v.pop();
                }
                if (check == 1)
                    break;
            }
            else
                v.push(s[i]);
        }
        if (check == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}