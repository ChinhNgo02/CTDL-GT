#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[100] = {}, n;

void in(int vt)
{
    cout << "(";
    for (int i = 1; i < vt; i++)
        cout << a[i] << " ";
    cout << a[vt] << ") ";
}

void Try(int j, int sum, int pt)
{
    for (int i = pt; i > 0; i--)
        if (sum + i <= n)
        {
            a[j] = i;
            sum += i;
            if (sum == n)
                in(j);
            else
                Try(j + 1, sum, i);
            sum -= i;
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1, 0, n);
        cout << endl;
    }
}