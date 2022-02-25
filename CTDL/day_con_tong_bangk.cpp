#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[100], v[100];
int dem = 0;

vector<vector<int>> res;

void nhap()
{
    res.clear();
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v + 1, v + n + 1);
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            int sum = 0;
            for (int x = 1; x <= n; x++)
            {
                if (a[x])
                    sum += v[x];
            }
            if (sum == k)
            {
                dem++;
                vector<int> q;
                for (int x = 1; x <= n; x++)
                    if (a[x])
                        q.push_back(v[x]);
                res.push_back(q);
            }
        }
        else
            Try(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        Try(1);
        if (res.size() == 0)
            cout << "-1" << endl;
        else
        {
            sort(res.begin(), res.end());
            for (int i = 0; i < res.size(); i++)
            {
                cout << "[";
                for (int j = 0; j < res[i].size() - 1; j++)
                {
                    cout << res[i][j] << " ";
                }
                cout << res[i][res[i].size() - 1] << "] ";
            }
            cout << endl;
        }
    }
}