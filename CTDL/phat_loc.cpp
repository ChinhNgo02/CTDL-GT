#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n, m, cou = 0;
int a[100][100];
vector<string> v;

void backtrack(int i, string s)
{

    if (i == n - 1 && s[n - 1] == '6')
    {
        v.push_back(s);
    }
    else if (i >= 0 && i < n)
    {
        backtrack(i + 1, s + "6");
        backtrack(i + 1, s + "8");
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    backtrack(0, "8");
    for (int i = 0; i < v.size(); i++)
    {
        int check = 0;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][0] == '6' || v[i][v[i].size() - 1] == '8' || (v[i][j] == '8' && v[i][j + 1] == '8') || (v[i][j] == '6' && v[i][j + 1] == '6' &&v[i][j+2] == '6' && v[i][j + 3] == '6'))
            {
                check = 1;
                break;
            }
        }
        if(check == 0) cout << v[i] << endl;
    }
}