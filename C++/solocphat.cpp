#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, a[15], i = 0, dem = 0;
        cin >> n;
        while(n){
            a[i++] = n % 10;
            n /= 10;
        }
        for(long long k = 0; k < i;k++){
            if(a[k] != 0 && a[k] != 6 && a[k] != 8) {
                dem = 1;
                break;
            }
        }
        if(dem == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}