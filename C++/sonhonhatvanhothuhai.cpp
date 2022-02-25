#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n; 
        cin >> n;
        long long A[n];
        for(long long i = 0; i < n;i++) cin >> A[i];
        sort(A, A+n);
        if(A[0] != A[1]) cout << A[0] << " " << A[1] <<endl;
        else cout << -1 << endl;
    }
}