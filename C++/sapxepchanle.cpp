#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 1; i <= n;i++) cin >> a[i];
        sort(a+1, a+n+1);
        int b[100000]={0}, c[100000] = {0};
        int h = 0, k = 0;
        for(int i = 1; i <= n;i++){
            if(i <= (n+1)/2) b[h++] = a[i];
            else c[k++] = a[i];
        }
        int d = 0, e = 0;
        for(int i = 1; i <= n;i++){
            if(i % 2 == 0) cout << c[d++] << " ";
            else cout << b[e++] << " "; 
        }
        cout << endl;
    }
}