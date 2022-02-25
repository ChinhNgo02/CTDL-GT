#include <bits/stdc++.h>
using namespace std;
int a[100] = {0}, n, k, h = 1;
string s[100], s1[100];
vector<string> name;
vector<int> v;

void xuat()
{
    for (int i = 1; i <= k; i++)
        cout << name[a[i] -1] << " ";
    cout << endl;
}

void check(int b)
{
    for (int i = a[b - 1] + 1; i <= name.size() - k + b; i++)
    {
        a[b] = i;
        if (b == k)
            xuat();
        else
            check(b + 1);
    }
}

int main()
{
    cin >> n >> k;
    set<string> a;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.insert(temp);
    }
    for (auto i : a)
    {
        name.push_back(i);
    }
    check(1);
    name.clear();
}
