#include <bits/stdc++.h>
#define MAX 20
using namespace std;

int n;
int A[MAX];
int a[MAX] = {0};
int b[100] = {0};
int dem = 1;
void xuat()
{
    int check = 0;
    for (int i = 1; i <= n; i++)
    {
        if (A[i] != b[i])
        {
            check = 1;
            break;
        }
    }
    if (check == 0)
    {
        cout << dem << endl;
    }
}

void check(int k)
{
    // int a[MAX]={0};
    for (int i = 1; i <= n; i++)
    {
        if (!a[i])
        {
            A[k] = i;
            a[i] = 1;
            if (k == n)
            {
                xuat();
                dem++;
            }
            else
                check(k + 1);
            a[i] = 0;
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
        dem = 1;
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        check(1);
    }
}