#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int b[n + 1], c[n + 1], h = 0, k = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1) b[h++] = a[i];
        else c[k++] = a[i];
    }
    sort(b , b+h);
    sort(c, c+k, greater<int>());
    h = 0, k = 0;
    for(int i=1;i <= n; i++){
        if(i % 2 == 1){
            cout << b[h++] << " ";
        }
        else
            cout << c[k++] << " ";
    }
}