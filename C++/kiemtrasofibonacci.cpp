#include<bits/stdc++.h>

using namespace std;

long long fibo(long long n){
        long long sum=0, n1=0, n2=1;
        while(sum < n){
            sum = n1 +n2;
            n1=n2;
            n2=sum;
        }
        if(sum == n) return 1;
        else return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(fibo(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}