#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[k + 5];
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    int i = k - 1;
    while (i > 0 && (a[i + 1] - a[i]) == 1)
        i -= 1;
    if (i == 0 && a[1] == 1)
    {
        for (int j = n - k + 1; j <= n; j++)
        {
            cout << j << " ";
        }
    }
    else
    {
        a[++i]--;
        for (int j = k; j >= i + 1; j--)
            a[j] = n - k +j;
        for (int j = 1; j <= k; j++)
            cout << a[j] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

// 1 5 6 7
// 2 3 4 5