#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, dem = 0, check = 0;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            int note = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[note] > a[j])
                {
                    note = j;
                    check = 1;
                }
            }
            if (check == 1)
            {
                swap(a[note], a[i]);
                check = 0;
                dem++;
            }

            // cout << dem << endl;
        }
        cout << dem << endl;
    }
}
