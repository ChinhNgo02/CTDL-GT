#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, check = 0;
        cin >> n >> k;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == k)
            {
                cout << i << endl;
                check = 1;
                break;
            }
        }
        if (check == 0)
            cout << "NO" << endl;
    }
}