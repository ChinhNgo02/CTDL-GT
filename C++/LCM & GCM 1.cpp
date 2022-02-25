#include<iostream>
#include<algorithm>

using namespace std;

long long check(long long a, long long b){
    long long gcm = __gcd(a,b);
    return a*b/gcm;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a = 1, b;
        cin >> b;
        for(long long i = 2; i <= b; i++) a = check(a,i);
        cout << a << endl;
    }
}