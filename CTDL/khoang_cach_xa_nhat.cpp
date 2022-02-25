#include <bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int n)
{
    int leftMin[n];
    int check = 0;
    leftMin[0] = arr[0];
    for (int i = 1; i < n; i++)
        leftMin[i] = min(leftMin[i - 1], arr[i]); // 6 5 4 3 2 1
    int maxDist = -1;
    int i = n - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (arr[j] > leftMin[i])
        {
            maxDist = max(maxDist, j - i);
            i--;
        }
        else
            j--;
    }

    if (maxDist == 0)
        return -1;
    else
        return maxDist;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int a[100005], b[100005];
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int maxDiff = maxIndexDiff(a, n);
        cout << maxDiff << endl;
    }
}