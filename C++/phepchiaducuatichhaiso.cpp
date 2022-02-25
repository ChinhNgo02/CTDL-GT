#include <bits/stdc++.h>
using namespace std;

long long mod(long long a, long long b, long long c)
{
    if (b == 0)
        return 0;
    long long tmp = mod(a, b / 2, c);
    if (b % 2 == 0)
        return (2 * (tmp % c)) % c;
    else
        return (a % c + 2 * (tmp % c)) % c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << mod(a, b, c) << endl;
    }
    return 0;
}