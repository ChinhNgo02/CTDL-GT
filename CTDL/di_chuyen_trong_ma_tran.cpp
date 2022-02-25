#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n, m, cou;
vector<vector<int>> a;

void init()
{
    cou = 0;
    cin >> n >> m;
    vector<int> x;
    x.resize(m);
    for (int i = 0; i < n; i++)
    {
        for (auto &j : x)
            cin >> j;
        a.push_back(x);
    }
}
// bỏ string đi
void backtrack(int i, int j)
{
    if (i == n - 1 && j == m - 1)
    {
        ++cou;
        return;
    }
    else if (i >= 0 && i < n && j >= 0 && j < m)
    {
        backtrack(i + 1, j);
        backtrack(i, j + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        init();
        backtrack(0, 0);
        cout << cou << endl;
        a.clear();
    }
    return 0;
}