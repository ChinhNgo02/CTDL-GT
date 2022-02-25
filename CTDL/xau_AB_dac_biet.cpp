#include <bits/stdc++.h>

using namespace std;
int A[20], n, k, B[100] = {0}, dem = 0;
vector<vector<int>> v;
void xuat()
{
    int check = 0;
    vector<int> v1;
    for (int i = 1; i <= n; i++)
    {
        if(a[i] == a[j])
    }
    for (int i = 1; i <= n; i++)
    {
        if (B[65] == k)
        {
            for (int j = 1; j <= n; j++)
                v1.push_back(A[j]);
            v.push_back(v1);
            check = 1;
            dem++;
        }
        if (check == 1)
            break;
    }
}

void nhap(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        A[i] = j + 65;
        if (i == n)
        {
            xuat();
        }
        else
            nhap(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    nhap(1);
    cout << dem << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << (char)(v[i][j]);
        }
        cout << endl;
    }
    // cout << endl;
}