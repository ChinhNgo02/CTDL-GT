#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5], b[n + 5];
        int check = -1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
            cin >> b[i];
        for (int i = 0, j = 0; i < n; i++, j++)
        {
            if (a[i] != b[j])
            {
                check = i;
                break;
            }
        }
        cout << check + 1 << endl;
    }
}