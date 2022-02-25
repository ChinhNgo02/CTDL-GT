#include <bits/stdc++.h>
using namespace std;
int main()
{
    int check[10] = {0};
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        char a;
        cin >> n;
        while (n--)
        {
            cin >> a;
            if (a == '1')  continue;
            if (a == '2' || a == '3' || a == '5' || a == '7')
                check[a - 48]++;
            if (a == '4')
            {
                check[3]++;
                check[2] += 2;
            }
            if (a == '6')
            {
                check[5]++;
                check[3]++;
            }
            if (a == '8')
            {
                check[7]++;
                check[2] += 3;
            }
            if (a == '9')
            {
                check[7]++;
                check[3] += 2;
                check[2]++;
            }
        }
        for (int i = 9; i > 1; i--)
        {
            while (check[i] > 0)
            {
                cout << i;
                check[i]--;
            }
        }
        cout << endl;
    }
}