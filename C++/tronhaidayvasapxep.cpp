#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        long long A[n], B[m], C[n+m], j = 0;
        for(long long i = 0; i < n;i++) cin >> A[i];
        for(long long i = 0; i < m;i++) cin >> B[i];
        for(long long i = 0; i < n;i++){ C[j] = A[i]; j++;}
        for(long long i = 0; i < m;i++){ C[j] = B[i]; j++;}
        sort(C, C+n+m);
        for(long long i = 0; i < m+n;i++) cout << C[i] << " ";
        cout <<  endl;
    }
}