#include <bits/stdc++.h>

using namespace std;

void chuyen(int n, char a, char b)
{
    cout << a << " -> " << b << endl;
}

void thap(int n, char a, char b, char c)
{
    if (n == 1)
        chuyen(1, a, c);
    else
    {
        thap(n - 1, a, c, b);
        chuyen(n, a, c);
        thap(n - 1, b, a, c);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    char a = 'A', b = 'B', c = 'C';
    cin >> n;
    thap(n, a, b, c);
}