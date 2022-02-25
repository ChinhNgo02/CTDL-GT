#include<bits/stdc++.h>

using namespace  std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, k;
        cin >> n >> k;
        long long A[n];
        for(long long i = 1; i <= n;i++) cin >> A[i];
        while(k--){
            long long a, b, sum = 0;
            cin >> a >> b;
            for(long long i = a; i <= b;i++){
                sum += A[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}
