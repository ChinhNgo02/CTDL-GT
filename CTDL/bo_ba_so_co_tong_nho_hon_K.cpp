#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
ll n, k, res;
vector<ll> a;
void input()
{
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    res = 0;
}
void test()
{
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] + a[i + 1] >= k)
            break;
        for (int j = i + 1; j < n - 1; j++)
        {
            int pos = lower_bound(a.begin() + j + 1, a.end(), k - a[i] - a[j]) - a.begin();
            res += pos - (j + 1);
        }
    }
    cout  << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        input();
        test();
        a.clear();
    }
    return 0;
}