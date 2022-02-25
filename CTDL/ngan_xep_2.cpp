#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    string s;
    int n;
    stack<int> v;
    while (t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> n;
            v.push(n);
        }
        else if (s == "POP" && v.size() > 0)
        {
            v.pop();
        }
        else if (s == "PRINT")
        {
            if (v.size() == 0)
            {
                cout << "NONE\n";
            }
            else {
                cout << v.top() << endl;
            }
        }
    }
}