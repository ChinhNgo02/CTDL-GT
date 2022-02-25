#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 5];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int l, r;
        cin >> l >> r;
        int dem = 0;
        for (int i = l; i < r; i++)
        {
            if (dem == 0)
            {
                if (arr[i + 1] < arr[i])
                    dem++;
            }
            else if (dem == 1)
            {
                if (arr[i + 1] > arr[i])
                    dem++;
            }
            else
                break;
        }
        if (dem == 0 || dem == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}