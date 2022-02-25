#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n;
void input()
{
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

void output()
{
    vector<int> left(n, 0), right(n, 0);
    left[0] = right[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > v[i - 1])
            left[i] = left[i - 1] + 1;
        else
            left[i] = 1;
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] < v[i - 1])
            right[i - 1] = right[i] + 1;
        else
            right[i - 1] = 1;
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = max(res, left[i] + right[i] - 1);
    }
    cout << res << endl;
    v.clear();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        input();
        output();
    }
}