#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long gcd = __gcd(a,b);
        cout << a*b/gcd << " " << gcd << endl;
    }
}