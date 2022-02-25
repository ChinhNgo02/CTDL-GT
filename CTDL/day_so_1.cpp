#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;

vector<vector<int>> ans;
int n;
void output()
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size() - 1; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << ans[i].back() << "]\n";
    }
}
void input(vector<int> &a)
{
    cin >> n;
    a.resize(n);
    for (auto &i : a)
        cin >> i;
    ans.push_back(a);
}
void solve(vector<int> a)
{
    if (a.size() == 1)
    {
        output();
        return;
    }
    else
    {
        vector<int> b;
        for (int i = 0; i < a.size() - 1; i++)
            b.push_back(a[i] + a[i + 1]);
        ans.push_back(b);
        solve(b);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        input(a);
        solve(a);
        ans.clear();
    }
    return 0;
}