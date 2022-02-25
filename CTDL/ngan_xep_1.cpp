#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int n;
    stack<int> v;
    while (cin >> s)
    {
        if (s == "push")
        {
            cin >> n;
            v.push(n);
        }
        else if (s == "pop")
        {
            v.pop();
        }
        else if (s == "show")
        {
            vector<int> a;
            if (v.size() == 0)
            {
                cout << "empty\n";
                continue;
            }
            while (v.size() > 0)
            {
                a.push_back(v.top());
                v.pop();
            }
            reverse(a.begin(), a.end());
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << " ";
                v.push(a[i]);
            }
            cout << endl;
        }
    }
}