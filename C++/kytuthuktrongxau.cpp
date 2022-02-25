#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, k, s = 1;
        cin >> n >> k;
        for(int i = 1; i <= n;i++) {
            int v = pow(2,i), u = pow(2,i-1);
            if(k % v == u){
                cout << char(64+s) << endl;
                break;
            }
            s++;
        }
    }
}
