#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5], sum = 0;
        for(int i = 1; i <= n;i++){
            cin >> a[i];
            sum += a[i];
        }
        int left = 0, x = 0;
        for(int i = 1; i <= n;i++){
            sum -= a[i];
            int right = sum;
            if(right == left){
                 x = i;
                 break;
            }
            left += a[i];
        }
        if(x != 0) cout << x << endl;
        else  cout << -1 << endl;
    }
}