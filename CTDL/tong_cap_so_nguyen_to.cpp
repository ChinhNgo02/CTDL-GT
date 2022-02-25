#include <bits/stdc++.h>

using namespace std;

int nt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, check = 0;
        cin >> n;
        if(n % 2 == 0 && nt(n-2)) {
            cout << 2 << " " << n-2 << endl;
            check = 1;
        }
        else {
            for (int i = 3; i <= n/2; i+=2) {
                if(nt(i) == 1&& nt(n-i) == 1){ 
                    cout << i << " " << n-i << endl;
                    check = 1;
                    break;
                    }
            }
        }
        if(check == 0)
            cout << "-1" << endl;
    }
}