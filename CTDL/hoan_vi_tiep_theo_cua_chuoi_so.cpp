#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int test, note = 0;
        cin >> test;
        string s;
        cin >> s;
        int a[101] = {0}, n = 0, check = 0;
        for (int i = 0; i < s.size(); i++)
        {
            a[n++] = s[i] - '0';
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i] > a[i - 1])
            {
                note = i - 1;
                check = 1;
                break;
            }
        }
        for (int i = note+1; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] >= a[j])
                    swap(a[i], a[j]);
            }
        }
        for (int i = note + 1; i < n; i++)
        {
            if (a[note] < a[i])
            {
                swap(a[note], a[i]);
                break;
            }
        }
        cout << test << " ";
        if (check == 0)
        {
            cout << "BIGGEST";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i];
            }
        }
        cout << endl;
    }
}
// 1 2 3 5 4