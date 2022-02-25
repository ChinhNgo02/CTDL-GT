#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int k, check = 0;
        cin >> k;
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            int vt = s.size() - 1;
            char Max = s[s.size() - 1];
            for (int x = j + 1; x < s.size(); x++ && k > 0)
            {
                if (Max <= s[x])
                {
                    Max = s[x];
                    vt = x;
                }
            }
            if (Max > s[j] && k > 0)
            {
                swap(s[j], s[vt]);
                k--;
            }
        }
        cout << s << endl;
    }
}