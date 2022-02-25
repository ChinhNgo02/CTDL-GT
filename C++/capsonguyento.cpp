#include<bits/stdc++.h>
using namespace std;

long long nt(long long n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n);i++) if(n % i == 0) return 0;
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        for(long long i = 2; i <= n;i++){
            if(nt(i)){
                if(nt(n - i) == 1) {
                    cout << i << " " << n-i << endl; 
                    break;
            }
        }
    }
    }
}