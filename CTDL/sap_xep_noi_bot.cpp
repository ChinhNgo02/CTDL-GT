#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k = 0;
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
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}
