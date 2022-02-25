#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, check = 0, note = 0;
        cin >> n;
        int a[n + 1], b[100005] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
            if(b[a[i]] > check ){
                 check = b[a[i]];
                 note = a[i];
            }
        }
        // int check = 0;
       if(check > n/2) cout << note << endl;
       else cout << "NO" << endl;
    }
}