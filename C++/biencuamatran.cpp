#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long A[n][n], B[n][n];
        for(long long i = 0; i < n;i++){
            for(long long j = 0; j < n;j++){
                cin >> A[i][j];
            }
        }
        for(long long i = 0; i < n;i++){
            for(long long j = 0; j < n;j++){
                if(i == 0 || j == 0 || j == n-1 || i == n-1) cout << A[i][j] << " ";
                else cout << "  ";
            }
            cout << endl;
        }
    }
}

