#include <bits/stdc++.h>
using namespace std;
int a[100] = {0}, n, k;
int A[100] = {0};
void xuat()
{
    int check = 0;
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1)
            check = 1;
    }
    if (check == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}

void check(int b)
{
    for (int i = 1; i <= n; i++)
    {
        if (!A[i])
        {
            A[i] = 1;
            a[b] = i;
            if (b == n)
                xuat();
            else
                check(b + 1);
            A[i] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        check(1);
    }
}
