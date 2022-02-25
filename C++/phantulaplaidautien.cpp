#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, check = 0;
        cin >> n;
        long long A[n], min = 1e8;
        for(long long i = 0; i < n;i++) cin >> A[i];
        for(long long i = 0; i < n-1;i++){
            for(long long j = i+1; j < n;j++){
                if(A[i] == A[j])
                if(min > j)  min = j;
            }
        }
        if(min == 1e8) cout << -1 << endl;
        else cout << A[min] << endl;
    }
}