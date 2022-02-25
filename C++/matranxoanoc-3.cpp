#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m], b[n*m+1] ={0};
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    int d = 0, hang = n-1, cot = m-1, h = 1;
    while(d <= n/2){
        for(int i = d; i <= cot;i++) b[h++] = a[d][i];
        for(int i = d+1;i <= hang;i++) b[h++] = a[i][cot];
        for(int i = cot-1; i >= d;i--) b[h++] = a[hang][i];
        for(int i = hang-1; i >= d+1;i--) b[h++] = a[i][d];
        d++; hang--; cot--;
    }
    for(int i = 1; i <= n*m;i++){
        if(i == k){
            cout << b[i] << endl;
            break;
        }
    }
    }
}