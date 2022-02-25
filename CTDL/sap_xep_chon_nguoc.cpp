#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v[120];
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int note = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[note] > a[j])
            {
                note = j;
            }
        }
        swap(a[note], a[i]);
        k++;
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
