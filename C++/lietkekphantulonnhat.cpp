#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long A[n];
        for(int i = 0; i < n;i++) cin >> A[i];
        sort(A, A + n);
        for(int i = n-1; i >= n-k;i--) cout << A[i] << " ";
        cout << endl;
    }
}