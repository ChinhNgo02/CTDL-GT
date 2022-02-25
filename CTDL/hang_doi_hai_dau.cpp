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
    deque<int> v;
    while (t--)
    {
        cin >> s;
        if (s == "PUSHBACK")
        {
            cin >> n;
            v.push_back(n);
        }
        else if (s == "PUSHFRONT")
        {
            cin >> n;
            v.push_front(n);
        }
        else if (s == "POPBACK" && v.size() > 0)
            v.pop_back();
        else if (s == "POPFRONT" && v.size() > 0)
            v.pop_front();
        else if (s == "PRINTBACK")
        {
            if (v.size() == 0)
                cout << "NONE" << endl;
            else
                cout << v.back() << endl;
        }
        else if (s == "PRINTFRONT")
        {
            if (v.size() == 0)
                cout << "NONE" << endl;
            else
                cout << v.front() << endl;
        }
    }
}