#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll min(string a, string b)
{
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '6')
            a[i] = '5';
        sum1 = sum1 * 10 + a[i] - '0';
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '6')
            b[i] = '5';
        sum2 = sum2 * 10 + b[i] - '0';
    }
    return sum1 + sum2;
}

ll max(string a, string b)
{
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '5')
            a[i] = '6';
        sum1 = sum1 * 10 + a[i] - '0';
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '5')
            b[i] = '6';
        sum2 = sum2 * 10 + b[i] - '0';
    }
    return sum1 + sum2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    string a, b;
    cin >> a >> b;
    cout << min(a, b) << " " << max(a, b) << endl;
    // }
}