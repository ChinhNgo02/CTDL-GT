#include <bits/stdc++.h>
#define mod 1000000007
#define PI 3.141592653589793238

using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n+5];
        long long dem = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        stable_sort(a, a+n);
        for(int i = 0; i < n-1; i++){
            int c;
            int temp = lower_bound(a, a+n, a[i]+k) - a;
            c = temp - (i+1);
            if(c >= 1){
                dem += c;
            }
        }
        cout << dem << endl;
    } 
}
