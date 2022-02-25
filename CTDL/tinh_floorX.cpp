#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        int check = 0;
        ll kq = -1, kq1 = 0;
        cin >> n >> k;
        ll a[n + 5];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            if (a[i] <= k)
            {
                kq = i;
                check = 1;
            }
        }
        if (check == 0)
            cout << -1 << endl;
        else
            cout << kq << endl;
    }
}

