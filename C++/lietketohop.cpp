#include <bits/stdc++.h>
using namespace std;
int a[100] = {0}, n, k;
void xuat()
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}

void check(int b)
{
    for (int i = a[b - 1] + 1; i <= n - k + b; i++)
    {
        a[b] = i;
        if (b == k)
            xuat();
        else
            check(b + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    cin >> n >> k;
    check(1);
    cout << endl;
    }
}
