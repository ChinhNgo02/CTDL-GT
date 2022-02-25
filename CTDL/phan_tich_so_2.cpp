#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[100] = {}, n;
vector<vector<int>> v;
vector<int> b;

void in(int vt)
{
    b.clear();
    for (int i = 1; i <= vt; i++)
        b.push_back(a[i]);
    v.push_back(b);
}
int dem = 0;
void Try(int j, int sum, int pt)
{
    for (int i = pt; i > 0; i--)
        if (sum + i <= n)
        {
            a[j] = i;
            sum += i;
            if (sum == n)
            {
                in(j);
                dem++;
            }
            else
                Try(j + 1, sum, i);
            sum -= i;
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
        cin >> n;
        Try(1, 0, n);
        cout << dem << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << "(";
            for (int j = 0; j < v[i].size() - 1; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << v[i][v[i].size() - 1] << ") ";
        }
        cout << endl;
        dem = 0;
        v.clear();
    }
}