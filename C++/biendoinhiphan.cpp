#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int arr1[a + 5][b + 5];
        int arr2[a + 5][b + 5] = {0};
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> arr1[i][j];
                if (arr1[i][j] == 1)
                {
                    for (int x = 0; x < a; x++)
                    {
                        for (int y = 0; y < b; y++)
                        {
                            if (x == i || y == j)
                            {
                                arr2[x][y] = 1;
                            }
                        }
                    }
                }
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << arr2[i][j] << " ";
            }
            cout << endl;
        }
    }
}