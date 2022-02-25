#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k, dem = 0, check = 0;
        cin >> n >> k;
        for(int i = 2; i <= n;i++){
            while(n % i == 0){
                dem++;
                n /= i;
                if(dem == k){
                     cout << i <<endl;
                     check = 1;
                     break;
                }
            }
        }
        if(check == 0) cout << "-1" << endl;
    }
}