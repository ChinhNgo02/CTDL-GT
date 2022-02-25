#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int check = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int note = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[note]> a[j])
            {
                note = j;
            }
        }
        // cout << note << endl;
        swap(a[note], a[i]);
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
