#include<bits/stdc++.h>

using namespace std;
long long n;
void rn(){
    long long a = 0;
    while(n){
        a += n%10;
        n /= 10;
    }
    n = a;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        while(n > 9) rn();
        cout << n << endl;
    }
}