#include<bits/stdc++.h>

using namespace std;

int check (int n, int a[], int k){
    set< int >s;
    for(int i = 0; i < n;i++) s.insert(a[i]);
    for(int i = 0; i < n;i++){
        int x = a[i]+k;
        if(s.find(x) != s.end()) return 1;
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n+5];
        for(int i = 0; i < n;i++) cin >> a[i];
        if(check(n,a,k)) cout << 1 << endl;
        else cout << -1 << endl;
    }
}