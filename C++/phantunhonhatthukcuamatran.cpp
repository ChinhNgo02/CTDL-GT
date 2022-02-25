#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;
    int A[n+1][n+1], b[100000], a=1;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n;j++){
             cin >> A[i][j];
            b[a++] = A[i][j];
        }
    }
    sort(b+1, b+n*n+1);
    for(int i = 1; i <= n*n;i++){
        if(i == k){
            cout << b[i] << endl;
            break;
        }
    }
    }

}