#include <bits/stdc++.h>

using namespace std;
int A[20], n, k;
void xuat()
{
    int check = 0;
    for (int i = 1; i <= n; i++)
    {
        if (A[i] == 1)
            check++;
    }
    if (check == k)
    {
        for (int i = 1; i <= n; i++)
            cout << A[i];
        cout << endl;
    }
}

void nhap(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        A[i] = j;
        if (i == n)
        {
            xuat();
        }
        else
            nhap(i + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        nhap(1);
    }
}