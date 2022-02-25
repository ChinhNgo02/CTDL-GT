#include <bits/stdc++.h>
using namespace std;
int a[100] = {0}, n, k;
int A[100] = {0};
char s;
void xuat()
{
    int check = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n == 4 && (a[1] == 1 || a[n] == 1))
            check = 1;

        else if (a[1] == 1 && a[n] == 5 || a[1] == 5 && a[n] == 1 || a[i] == 5 && a[i + 1] == 1 || a[i] == 5 && a[i - 1] == 1)
        {
            check = 1;
        }
    }
    if (check == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << (char)(a[i] + 64);
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
    cin >> s;
    n = (int)s - 64;
    check(1);
}
