#include <bits/stdc++.h>
#define MAX 30
using namespace std;

int n, k, dem = 1;
int A[MAX] = {0};
int b[MAX] = {0};
int a[MAX] = {0};
 vector<int> v;

void xuat()
{
    for (int i = 1; i <= k; i++)
        cout << A[i] << " ";
    cout << endl;
}

void Try(int c)
{
    for (int i = a[c - 1] + 1; i <= v.size() - k + c; i++)
    {
        A[c] = v[i - 1];
        a[c] = i;
        if (c == k)
        {
            xuat();
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
    set<int> d;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        d.insert(b[i]);
    }
    for (auto i : d)
        v.push_back(i);
    Try(1);
}
