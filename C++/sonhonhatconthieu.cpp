#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, sum = 0;
        cin >> n;
        long long a[n-1];
        for(long long i= 0; i < n-1;i++){
            cin >> a[i];
            sum += a[i];
        }
        cout << n*(n+1)/2-sum << endl;
    }
}