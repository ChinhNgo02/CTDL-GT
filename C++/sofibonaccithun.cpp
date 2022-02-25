#include<bits/stdc++.h>

using namespace std;

long long fibo(long long n){
        if(n == 1 || n == 2) return 1;
        long long sum=0, n1=1, n2=1, dem =2;
        while(dem < n){
            sum = n1 +n2;
            n1=n2;
            n2=sum;
            dem++;
        }
        return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << fibo(n) << endl;
    }
}