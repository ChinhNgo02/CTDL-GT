#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, k = 0;
        cin >> n;
        long long a[n + 1], b[100000];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            b[k] = a[i];
            k++;
        }
        long long sum = 1;
        for (long long i = 0; i < n - 1; i++)
        {
            sum = a[i];
            for (long long j = i + 1; j < n; j++)
            {
                sum = sum * a[j];
                b[k] = sum;
                k++;
            }
        }
        sort(b, b + k);
        cout << b[k - 1] << endl;
    }
}