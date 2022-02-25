#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, check = 0;
        cin >> n;
        long long A[1000000],b[1000000] = {};
        for(long long i = 0; i < n;i++){
            cin >> A[i];
            b[A[i]]++;
        }
        for(long long i = 0; i < n;i++){
            if(b[A[i]] > 1) {
                cout << A[i] << endl;
                check = 1;
                break;
            }
        }
        if(check == 0) cout << -1 << endl;
    }
}