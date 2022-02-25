#include <bits/stdc++.h>
#define MAX 20
using namespace std;

int n, k, dem = 1;
int A[MAX] = {0};
int a[MAX] = {0};
int b[100];

void xuat()
{
    int check = 0;
    for (int i = 1; i <= k; i++)
    {
        if (A[i] != b[i])
        {
            check = 1;
            break;
        }
    }
    if (check == 0)
        cout << dem << endl;
}

void Try(int c)
{
    for (int i = A[c - 1] + 1; i <= n - k + c; i++)
    {
        A[c] = i;
        if (c == k)
        {
            xuat();
            dem++;
        }
        else
            Try(c + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        dem = 1;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> b[i];
        Try(1);
    }
}
