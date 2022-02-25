#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    // vector<int> v[100];
    while (t--)
    {
        vector<int> v[100];
        int n, k = 0;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int check = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
            k++;
            // cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; j++)
            {
                v[k].push_back(a[j]);
            }
        }
        for (int i = k; i >= 1; i--)
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
