#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a[n + 5];
    for(int i = 0; i < n;i++) cin >> a[i];
    long long sum = 0;
    for(int i = 0; i < n;i++){
        if(a[i] > 0) sum += a[i]*2;
    }
    cout << sum << endl;
}