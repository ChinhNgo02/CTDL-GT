#include<bits/stdc++.h>

using namespace std;

long long stn(long long n){
    long long A[20], k = 0;
    while(n){
        A[k++] = n % 10;
        n /= 10;
    }
    for(long long i = 0; i < k;i++){
        if(A[i] != A[k-1-i]) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(stn(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}