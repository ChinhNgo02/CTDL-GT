#include<bits/stdc++.h>

using namespace std;

int nt(int n){
    if(n < 2) return 0;
    for(int i = 2;i <= sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, t = 0;
        cin >> x;
        for(int i = 1; i <= x;i++){
            if((__gcd(x,i)) == 1) t++;
        }
        if(nt(t)) cout << 1 << endl;
        else cout << 0 << endl;
    }
}