// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n + 1];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     int k;
//     cin >> k;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != k)
//             cout << a[i] << " ";
//     }
// }

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1], b[10000] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (b[a[i]] != 0)
        {
            cout << a[i] << " ";
            b[a[i]] = 0;
        }
    }
}