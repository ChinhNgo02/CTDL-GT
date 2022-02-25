#include<bits/stdc++.h>

using namespace std;

int  check(int a[], int b[], int m, int n){
    int sum = 0;
    int tong = 0;
    for(int i = 0; i < m;i++){
        tong += a[i];
        int k = 0;
        for(int j = i+1;j < n;j++){
            k += b[j];
        }
        if(tong + k > sum) sum = tong + k;
    }
    return sum;
}

void nhap(int a[], int m){
    for(int i = 0; i < m;i++) cin >> a[i];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        int a[m], b[n];
        nhap(a, m);
        nhap(b, n);
        int max = check(a,b,m,n);
        int checks = check(b,a,n,m);
        if(max < checks) max = checks;
        cout << max << endl;
    }
}
//22 20 33 
// 2 3 7 10 12
// 1 5 7 8
//=> 35

//