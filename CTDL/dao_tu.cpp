
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream s1(s);
        string s2;
        vector<string> ss;
        while (s1 >> s2)
        {
            ss.push_back(s2);
        }
        for (int i = ss.size() - 1; i >= 0; i--)
        {
            cout << ss[i] << " ";
        }
        cout << endl;
    }
}
