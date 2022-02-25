#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
bool check[1005];
int truoc[1005];

string DFS(int u, int v)
{
    int dem = 0;
    queue<int> q;
    q.push(u);
    while (q.size() > 0)
    {
        int top = q.front();
        q.pop();
        if (top == v)
        {
            dem = 1;
            break;
        }
        check[top] = 1;
        for (int i = 0; i < ke[top].size(); i++)
        {
            if (!check[ke[top][i]])
            {
                check[ke[top][i]] = 1;
                truoc[ke[top][i]] = top;
                q.push(ke[top][i]);
            }
        }
    }
    if (dem == 0)
        return "NO";
    else
        return "YES";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 1001; i++)
            ke[i].clear();
        memset(check, 0, sizeof(check));
        memset(truoc, 0, sizeof(truoc));
        int a, b, nguon, dich;
        cin >> a >> b;
        for (int i = 0; i < b; i++)
        {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            memset(check, 0, sizeof(check));
            memset(truoc, 0, sizeof(truoc));
            cin >> nguon >> dich;
            cout << DFS(nguon, dich);
            cout << "\n";
        }
        // Trace(dich, nguon);
        // cout << "\n";
    }
}