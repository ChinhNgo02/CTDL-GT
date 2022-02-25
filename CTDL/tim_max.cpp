#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll res = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll max = 0;
        for (int i = 0; i < n; i++)
        {
            max = (max + a[i] * i)% res;
        }
        cout << max << endl;
    }
}