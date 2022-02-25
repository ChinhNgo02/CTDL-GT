#include<bits/stdc++.h>

using namespace  std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        long long A[n], B[m];
        for(long long i = 0; i < n;i++) cin >> A[i];
        for(long long i = 0; i < m;i++) cin >> B[i];
        sort(A, A+n);
        sort(B, B+m);
        long long tich = A[n-1]*B[0];
        cout << tich << endl;
    }
}

