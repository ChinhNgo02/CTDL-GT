#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n, m;
    cin >> n >> m;
    int a[n][m], b[n*m] ={0};
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    int d = 0, hang = n-1, cot = m-1, h = 0;
    while(d <= n/2){
        for(int i = d; i <= cot;i++) b[h++] = a[d][i];
        for(int i = d+1;i <= hang;i++) b[h++] = a[i][cot];
        for(int i = cot-1; i >= d;i--) b[h++] = a[hang][i];
        for(int i = hang-1; i >= d+1;i--) b[h++] = a[i][d];
        d++; hang--; cot--;
    }
    for(int i = n*m-1; i >=0;i--) cout << b[i] << " ";
        cout << endl;
    }
}