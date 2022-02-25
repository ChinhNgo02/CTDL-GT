#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
vector<int> x, y, mark;
int n, m;
ll countt;

void input()
{
    cin >> n >> m;
    x.resize(n);
    y.resize(m);
    mark.resize(1005, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> y[i];
        mark[y[i]]++;
    }
    countt = 0;
}
void pairs(int index)
{
    if (index == 0)
        return;
    else if (index == 1)
    {
        countt += mark[0];
        return;
    }
    int k = upper_bound(y.begin(), y.end(), index) - y.begin();
    countt += (m - k) + mark[0] + mark[1];
    if (index == 2)
        countt -= (mark[4] + mark[3]);
    else if (index == 3)
        countt += mark[2];
}
void check()
{
    input();
    sort(y.begin(), y.end());
    for (int i = 0; i < n; i++)
    {
        pairs(x[i]);
    }
    cout << countt << endl;
    x.clear();
    y.clear();
    mark.clear();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        check();
    }
}