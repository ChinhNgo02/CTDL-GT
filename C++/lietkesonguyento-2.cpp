#include<bits/stdc++.h>

using namespace std;
long long nt(long long n){
    if(n < 2) return 0;
    for(long long i = 2; i <= sqrt(n); i++) if( n % i == 0) return 0;
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        for(long long i = a; i <= b;i++){
            if(nt(i)) cout << i << " ";
        }
        cout << "\n";
    }
}