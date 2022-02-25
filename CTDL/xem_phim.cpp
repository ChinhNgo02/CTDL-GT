#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int C, n;
        cin >> C >> n;
        int a[n + 1];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        // sort(a,a+n,greater<int>());
        int sum = 0, max = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(a[j] > sum) sum = max()
            }
        }
    }
}