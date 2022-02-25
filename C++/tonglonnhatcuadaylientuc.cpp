#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, max, sum, k = 0;
        cin >> n;
        long long a[n+5];
        for(long long i = 0; i < n;i++){
            cin >> a[i];
            if(a[i] > 0) k = 1;
            if( i == 0) max = a[i];
            else if(max < a[i]) max = a[i];
    }

    if(k == 0) cout << max << endl;
    else{
        long long sum = 0, x = 0;
        for(long long i = 0; i < n;i++){
            if(sum + a[i] < 0){
                sum = 0;
                continue;
            }
            sum+= a[i];
            if(x < sum) x = sum;
        }
        cout << x << endl;
    }
}
}