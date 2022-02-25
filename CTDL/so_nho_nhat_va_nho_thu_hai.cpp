#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, check = 0;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[0])
            {
                cout << a[0] << " " << a[i] << endl;
                check = 1;
                break;
            }
        }
        if (check == 0)
            cout << -1 << endl;
    }
}