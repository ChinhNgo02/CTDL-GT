#include<bits/stdc++.h>

using namespace std;

int check(int a[], int n, int k){
    int dem = 0;
    for(int i = 0; i < n;i++) if(a[i] <= k) dem++;
    int bad = 0;
    for(int i = 0; i < dem;i++) if(a[i] > k) bad++;
    int kq = bad;
    for(int i = 0, j = dem; j < n; i++, j++){
        if(a[i] > k) bad--;
        if(a[j] > k) bad++;
        kq = min(kq,bad);
    }
    return kq;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k; 
        int a[n+1];
        for(int i = 0; i < n;i++) cin >> a[i];
        cout << check(a,n,k) << endl;
    }
}