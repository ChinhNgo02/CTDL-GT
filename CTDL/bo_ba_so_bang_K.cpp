#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, dem = 0;
        cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        // int x = 0, z = n - 1, y = x + 1;
        for (int x = 0; x < n; x++)
        {
            while (1)
            {
                int z = n - 1, y = x + 1;
                if (a[x] + a[y] + a[z] < k && y != z)
                {
                    y++;
                    dem++;
                }
                else
                {
                    z--;
                    x = 0;
                    y = x + 1;
                }
                if (z == 1)
                    break;
            }
        }
        cout << dem << endl;
    }
}
//
// 1 3 4 5 7
