#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, j = 0;
        cin >> n;
        long long A[n], B[n];
        for(int i = 0; i < n;i++) cin >> A[i];
        for(int i = 0; i < n;i++) B[i] = -1;
        for(int i = 0; i < n;i++){
            for(int j = 0; j < n;j++){
            if( i == A[j])  B[i] = i;
            }
        }
        for(int i = 0; i < n;i++) cout << B[i] << " ";
        cout << endl;
    }
}