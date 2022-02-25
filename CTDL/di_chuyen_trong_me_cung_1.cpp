#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n, m, cou = 0;
int a[100][100];

void init()
{
    cou = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
}
// bỏ string đi
void backtrack(int i, int j, string s)
{
    if (i == n - 1 && j == n - 1 && a[i][j])
    {
        cout << s << " ";
        cou = 1;
        return;
    }
    else if (i >= 0 && i < n && j >= 0 && j < n && a[i][j])
    {
        backtrack(i + 1, j, s + "D");
        backtrack(i, j + 1, s + "R");
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
        backtrack(0, 0, "");
        if (!cou)
            cout << "-1";
        cout << endl;
        // a.clear();
    }
    return 0;
}