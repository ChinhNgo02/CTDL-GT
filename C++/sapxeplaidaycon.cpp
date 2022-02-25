#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        for(int i = 1; i <= n;i++) cin >> a[i];
        int k = 0, h = 0;
        for(int i = 1;i < n;i++){
            for(int j = i+1; j <= n;j++){
                if(a[i] > a[j]){
                    h = i;
                    break;
                }
            }
            if(h != 0) break;
        }
        for(int i = n;i > 1;i--){
            for(int j = i-1; j >= 1;j--){
                if(a[i] < a[j]){
                    k = i;
                    break;
                }
            }
            if(k != 0) break;
        }
       cout << h << " " << k << endl;
    }
}