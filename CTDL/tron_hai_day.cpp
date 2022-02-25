#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<long long>v;
    long long t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n >> m;
        long long a[n + 1], b[m + 1];
        for(long long i = 0; i < n; i++) {
            cin >> a[i];
            v.push_back(a[i]);
        }
        for(long long i = 0; i < m; i++) {
            cin >> b[i];
            v.push_back(b[i]);
        }
        sort(v.begin(), v.end());
        for(long long i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}