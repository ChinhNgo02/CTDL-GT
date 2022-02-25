#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int A[n+1];
        for(int i = 1; i <= n;i++) cin >> A[i];
        sort(A+1, A+n+1);
        for(int i = 1; i <= n;i++){
            if(i = k) {
                cout << A[i] << endl;
                break;
            }
        }
    }
}
