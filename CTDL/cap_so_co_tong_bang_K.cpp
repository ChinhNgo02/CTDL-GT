#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<ll, ll> a;
        int n, k;
        cin >> n >> k;
        ll x, res = 0;
        while (n--)
        {
            cin >> x;
            a[x]++;
        }
        for (auto i : a)
        {
            if (i.first * 2 == k)
                res += i.second * (i.second - 1);
            else
                res += i.second * a[k - i.first];
        }
        cout << res / 2 << endl;
    }
    return 0;
}
//-1 1 5 7

// -1 1 5 5 7