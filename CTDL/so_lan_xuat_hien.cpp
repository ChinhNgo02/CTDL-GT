#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, check = 0;
        cin >> n >> k;
        int a[n + 5], b[100000] = {0};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[a[i]]++;
        }
        for(int i = 0; i < n;i++) {
            if(a[i] == k) {
                cout << b[a[i]] << endl;
                check = 1;
                break;
            }
        }
        if(check == 0) cout << -1 << endl;
    }
}