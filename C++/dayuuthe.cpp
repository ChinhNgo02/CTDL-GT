#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[200] = {};
        int i = 0, c = 0, l = 0;
        char ch;
        do
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                c++;
            else
                l++;
            ++i;
            ch = getchar();
        } while (ch != '\n');

        if (i % 2 == 0 && c > l || i % 2 != 0 && l > c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}