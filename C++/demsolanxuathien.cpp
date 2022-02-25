#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, dem = 0, check = 0;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n;i++) cin >> a[i];
        for(int i = 0; i < n;i++){
            if(a[i] == k) {
                dem++;
                check = 1;
            }
        }
        if(check == 1) cout << dem << endl;
        else cout << 0 << endl;
    }
}