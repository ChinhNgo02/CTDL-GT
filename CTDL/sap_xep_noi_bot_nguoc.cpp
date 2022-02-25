#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v[120];
        int n, k = 0, h = 0;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    k++;
                }
            }
            if (k == 0)
                break;
            k = 0;
            h++;
            for (int j = 0; j < n; j++)
                v[h].push_back(a[j]);
        }
        for (int i = h; i >= 1; i--)
        {
            cout << "Buoc " << i << ": ";
            for (int j = 0; j < v[i].size(); j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
}
