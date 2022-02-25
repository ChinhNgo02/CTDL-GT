#include<bits/stdc++.h>

using namespace std;
#define r 1000000007

long long gcd(long long a, long long b){
     return __gcd(a,b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, sum = 1;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n;i++) cin >> a[i];
        long long mu = a[0];
        for(int i = 0; i < n;i++){
            sum = (sum*a[i])%r;
            mu = gcd(mu,a[i])%r;
        }
        long long kq = 1;
        for(int i = 1; i <= mu;i++){
            kq = (kq*sum)%r;
        }
        cout << kq << endl;
    }
}