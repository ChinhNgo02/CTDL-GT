#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        vector<long long> arr;
        long long sl = 0;
        for (long long i = 0; i < a; i++)
        {
            long long b;
            cin >> b;
            if (b != 0)
            {
                arr.push_back(b);
            }
            else
                sl++;
        }
        for (long long i = 0; i < a - sl; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = sl; i >= 1; i--)
        {
            cout << 0 << " ";
        }
        cout << endl;
        arr.clear();
    }
}