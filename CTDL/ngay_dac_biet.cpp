#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n = 4, m, cou = 0;
int a[100][100];
vector<string> v;

void backtrack(int i, string s)
{
    if (i == n - 1 && s[0] == '2')
    {   
        string s1= "02/02/" + s;
        v.push_back(s1);
        s1 = "20/02/"+s;
        v.push_back(s1);
        s1 = "22/02/" + s;
        v.push_back(s1);
    }
    else if (i >= 0 && i < n)
    {
        backtrack(i + 1, s + "0");
        backtrack(i + 1, s + "2");
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    backtrack(0, "2");
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

