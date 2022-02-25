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
        cin >> s;
        int len = s.length();
        int check = 0;
        for (int i = len - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                s[i] = '0';
                check = i;
                break;
            }
        }
        for (int i = check + 1; i <= len - 1;i++) {
            s[i] = '1';
        }
        if(check == 0) {
            for(int i = 0; i < len; i++)
                s[i] = '1';
        }
        cout << s << endl;
    }
}

