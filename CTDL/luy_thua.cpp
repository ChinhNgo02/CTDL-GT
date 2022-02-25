#include <bits/stdc++.h>
using namespace std;
long long n, res = 1e9 + 7;
long long tr(long long n, long long k)
{
    if (k == 1)
        return n % res;
    if (k == 0)
        return 1 % res;
    long long temps = tr(n, k / 2);
    if (k % 2 == 0)
        return (temps * temps) % res;
    else
        return (temps * temps) % res * n % res;
}
void lam()
{
    long long k;
    cin >> n >> k;
    cout << tr(n, k) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        lam();
}