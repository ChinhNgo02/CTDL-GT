#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long k, n;
        cin >> k >> n;
        long long A[k][n], c= 0, b[n*k];
        for(long long i = 0; i < k;i++)
        for(long long j = 0; j < n;j++){
             cin >> A[i][j];
             b[c++] = A[i][j];
        }
        sort(b, b + k*n);
        for(int i = 0; i < n*k;i++) cout << b[i] << " ";
        cout << endl;
    }
}