#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n], b[n*n] ={}, k = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> a[i][j];
            b[k++] = a[i][j];
        }
    }
    sort(b, b+n*n);
    int d = 0, hang = n-1, cot = n-1, h = 0;
    // for(int i = 0; i < n*n;i++) cout << b[i] << " ";
    // cout << endl;
    while(d <= n/2){
        for(int i = d; i <= cot;i++) a[d][i] = b[h++];
        for(int i = d+1;i <= hang;i++) a[i][cot] =b[h++];
        for(int i = cot-1; i >= d;i--) a[hang][i] = b[h++];
        for(int i = hang-1; i >= d+1;i--) a[i][d] = b[h++];
        d++; hang--; cot--;
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}