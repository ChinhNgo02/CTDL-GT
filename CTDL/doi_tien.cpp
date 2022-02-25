#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int n, dem = 0;
        cin >> n;
        int k = 9, m;
        while (1)
        {
            if (n / a[k] >= 1)
            {
                m = n / a[k];
                n = n -m*a[k];
                dem += m;
                k--;
            }
            else
                k--;
            if (k < 0)
                break;
        }
        cout << dem << endl;
    }
}