#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long A[n+1];
        for(long long i = 1; i <= n;i++) cin >> A[i];
        for(long long i = 1; i <= n;i++)
            if(A[i] == k) cout << i << endl;
    }
}