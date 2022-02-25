#include <bits/stdc++.h>

using namespace std;
int t;

int main()
{
    cin >> t;
    int h = t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> s1;
        int j = 0;
        // cout << "Test " << h-t << ": ";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'D')
            {
                if (i == 0 || s[i - 1] == 'I')
                    s1.push(++j);
                s1.push(++j);
            }
            else
            {
                while (!s1.empty())
                {
                    cout << s1.top();
                    s1.pop();
                }
                if (i == 0)
                    cout << ++j;
                if (s[i + 1] != 'D')
                    cout << ++j;
            }
        }
        while (!s1.empty())
        {
            cout << s1.top();
            s1.pop();
        }
        cout << endl;
    }
}
