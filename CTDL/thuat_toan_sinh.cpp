#include <bits/stdc++.h>

using namespace std;
int A[20], n;
void xuat()
{
    int check = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (A[i] != A[n - i + 1])
        {
            check = 1;
            break;
        }
    }
    if (check == 0)
    {
        for (int i = 1; i <= n; i++)
            cout << A[i] << "                      ";
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
    cin >> n;
    nhap(1);
}