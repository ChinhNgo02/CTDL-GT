#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &i : a)
            cin >> i;
        int start;
        long long cnt = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            start = lower_bound(a + i + 1, a + n, a[i] + k) - a;
            cout << start << endl;
            cnt += start - i - 1;
        }
        cout << cnt << endl;
    }
    return 0;
}

// 1 2 4 10