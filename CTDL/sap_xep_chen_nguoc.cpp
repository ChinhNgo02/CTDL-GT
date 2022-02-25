// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     vector<int> v[120];
//     int n, k = 0;
//     cin >> n;
//     int a[n + 5];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             for (int x = j + 1; x <= i; x++)
//             {
//                 if (a[j] > a[x])
//                     swap(a[j], a[x]);
//             }
//         }
//         k++;
//         for (int j = 0; j <= i; j++)
//         {
//             v[k].push_back(a[j]);
//         }
//     }
//     for (int i = k; i >= 1; i--)
//     {
//         cout << "Buoc " << i - 1 << ": ";
//         for (int j = 0; j < v[i].size(); j++)
//         {
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
void out(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> v[105];
        int k = 0, h = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (a[j] < a[j - 1])
                {
                    swap(a[j], a[j - 1]);
                    h = 1;
                }
            }
            if(h == 0)
                break;
            h = 0;
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
                cout << v[i][j] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}