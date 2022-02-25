#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                check = 1;
                break;
            }
        }
        if (check == 1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}