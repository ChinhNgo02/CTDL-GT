#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n + 5], b[n + 5] = {0};
        for (long long i = 1; i <= n; i++)
            cin >> a[i];
        b[1] = a[1];
        b[2] = max(a[1], a[2]);
        for (long long i = 3; i <= n; i++)
        {
            b[i] = max(b[i - 2] + a[i], b[i - 1]);
        }
        cout << b[n] << endl;
    }
}