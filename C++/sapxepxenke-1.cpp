#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i = 0; i < n;i++) cin >> a[i];
        sort(a, a+n);
        long long k = n, m = 0;
        for(long long i = 0;i < n;i +=2){
                b[i] = a[k-1];
                k--;
        }
        for(long long i = 1;i < n; i+=2){
            b[i] = a[m];
            m++;
        }
        for(long long i = 0; i < n;i++) cout << b[i] << " ";
        cout << endl;
    }
}