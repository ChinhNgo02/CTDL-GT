#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        // int note = a[i];
        for (int j = 0; j < i; j++)
        {
            for (int x = j + 1; x <= i; x++)
            {
                if (a[j] > a[x])
                    swap(a[j], a[x]);
                k++;
            }
        }
        // cout << note << endl;
        // swap(a[note], a[i]);
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
    cout << k << endl;
}
