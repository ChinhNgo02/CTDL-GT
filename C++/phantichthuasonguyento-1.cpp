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
        long long n, dem = 0;
        cin >> n;
        while(n % 2 == 0){
            dem++;
            n /= 2;
        }
        if(dem) cout << "2 "<< dem <<" "; 
        for(int i = 3; i <= sqrt(n);i += 2){
            dem = 0;
            while(n % i == 0){
                dem++;
                n /= i;
            }
            if(dem) cout << i << " " << dem << " ";
        }
        if(n > 2) cout << n << " 1"; 
        cout << endl;
    }
}