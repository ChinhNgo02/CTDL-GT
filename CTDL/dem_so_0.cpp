#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n + 5];
        int dem = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            if(a[i] == 0) {
                dem++;
            }
        }
        cout << dem << endl;
    }
}