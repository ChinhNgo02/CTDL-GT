#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, r = pow(10,9)+7;
        cin >> n;
        long long a[1001];
        a[0] = 0, a[1]= 1;
        for(long long i = 2; i <= n;i++){
            a[i] = (a[i-1]+a[i-2])%r;
        }
        cout << a[n] << endl;
    }
}