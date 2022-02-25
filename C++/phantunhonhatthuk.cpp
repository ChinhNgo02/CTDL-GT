#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, k;
        cin >> n >> k;
        long long A[n + 5];
        for(int i = 1; i <= n;i++) cin >> A[i];
        sort(A+1, A+n+1);
        for(int i = 1;i <= n;i++){
            if(k == i) cout << A[i] << endl;
        }
    }
    return 0;
}