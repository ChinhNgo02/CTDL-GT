#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n], check = 0;
        for(int i = 0; i < n;i++) cin >> a[i];
        sort(a, a+n);
        int x = 0, z = n-1, y = z-1;
        while(a[x]*a[x] + a[y]*a[y] != a[z]*a[z]){
            if(a[x]*a[x] + a[y]*a[y] < a[z]*a[z]) x++;
            else y--;
            if(x == y){
                z--;
                x = 0;
                y = z-1; 
            }
            if(z == 1) break;
        }
        if(a[x]*a[x] + a[y]*a[y] == a[z]*a[z])  cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}