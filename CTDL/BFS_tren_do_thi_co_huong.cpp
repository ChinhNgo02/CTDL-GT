#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
bool check[1005];

void BFS(int dinh)
{
    queue<int> q;
    q.push(dinh);
    while (q.size() > 0)
    {
        int top = q.front();
        q.pop();
        cout << top << " ";
        check[top] = true;
        for (int i = 0; i < ke[top].size(); i++)
        {
            if (!check[ke[top][i]])
            {
                check[ke[top][i]] = 1;
                q.push(ke[top][i]);
            }
        }
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
        for (int i = 0; i < 1005; i++)
            ke[i].clear();
        memset(check, 0, sizeof(check));
        int a, b, dinh;
        cin >> a >> b >> dinh;
        for (int i = 0; i < b; i++)
        {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
        }
        BFS(dinh);
        cout << endl;
    }
}