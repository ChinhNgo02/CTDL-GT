#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;

ll C(ll k, ll n)
{
    ll a[1005][1005];
    if (k == 0 || k == n)
        return 1;
    // ll a[100][100];
    else
    {
        for (ll i = 0; i <= k; i++)
        {
            for (ll j = i; j <= n; j++)
            {
            if(i == 0 || i == j) a[i][j] = 1;
            else
                a[i][j] = (a[i][j - 1] + a[i - 1][j - 1])%mod;
            }
        }
    }
    return a[k][n] % mod ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << C(k, n) << endl;
    }
}

