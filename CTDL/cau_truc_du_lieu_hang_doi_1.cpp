#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    // queue<int> v;
    while (t--)
    {
        queue<int> v;
        int n, k, h;
        cin >> n;
        while (n--)
        {
            cin >> k;
            if (k == 1)
            {
                cout << v.size() << endl;
            }
            else if (k == 2)
            {
                if (!v.empty())
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
            else if (k == 3) {
                cin >> h;
                v.push(h);
            }
            else if(k == 4) {
                if(!v.empty()) v.pop();
            }
            else if(k == 5) {
                if(!v.empty()) cout << v.front() << endl;
                else cout << -1 << endl;
            }
            else if (k == 6)
            {
                if (!v.empty())
                    cout << v.back() << endl;
                else
                    cout << -1 << endl;
            }
        }
    }
}