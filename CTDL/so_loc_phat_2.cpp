#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        stack<string> s;
        vector<string> s1;
        string x = "6";
        string y = "8";
        int i = 1;
        queue<string> q;
        q.push(x);
        q.push(y);
        s.push(x);
        s.push(y);
        string dai = q.front();
        while (dai.size() < k)
        {
            q.push(q.front() + "6");
            q.push(q.front() + "8");
            s.push(q.front() + "6");
            s.push(q.front() + "8");
            q.pop();
            dai = q.front();
        }
        cout << s.size() << endl;
        while (!s.empty())
        {
            // s1.push_back(s.top());
            cout << s.top() << " ";
            s.pop();
        }
        // for(int i = s1.size()-1; i >= 0;i--) cout << s1[i] << " ";
        cout << endl;
    }
}