#include <bits/stdc++.h>
using namespace std;
int h[11], c[11], nguoc[22], xuoi[22];
int n, res;

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!h[j] && !c[j] && !nguoc[i - j + n] && !xuoi[i + j - 1])
        {
            h[j] = c[j] = xuoi[i + j - 1] = nguoc[i - j + n] = 1;
            if (i == n)
                res++;
            else
                Try(i + 1);
            h[j] = c[j] = xuoi[i + j - 1] = nguoc[i - j + n] = 0;
        }
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
        res = 0;
        cin >> n;
        Try(1);
        cout << res << endl;
    }
}