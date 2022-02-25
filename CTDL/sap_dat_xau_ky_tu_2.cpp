#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> n >> s;
        int k = s.length();
        int b[10000] = {}, max = 0;
        for (int i = 0; i < k; i++)
        {
            b[s[i]]++;
            if(b[s[i]] > max) max = b[s[i]];
        }

        int check = 1;
        for (int i = 0; i < k; i++)
        {
            if (k % 2 == 0 && max*n > k )
            {
                check = 0;
            }
            if (k % 2 != 0 && max*n > k+1  )
            {
                check = 0;
            }
        }
        if (check == 1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}

// BABA