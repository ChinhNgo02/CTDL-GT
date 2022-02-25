#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n;
void backtracking(int pos, string s)
{
    if (pos == 0)
        cout << s << " ";
    else
    {
        backtracking(pos - 1, s + "A");
        backtracking(pos - 1, s + "B");
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
        cin >> n;
        backtracking(n, "");
        cout << endl;
    }
    return 0;