#include<bits/stdc++.h>

using namespace std;
int n, k, s, C[25], ans;

void in() {
    int t= 0;
    for(int i = 1; i <= k;i++) t += C[i];
    if(s == t) ans++;
}

void Try(int i) {
    for(int j = C[i-1]+1; j <= n-k+i;j++){
        C[i] = j;
        if(i == k) in();
        else Try(i+1);
    }
}

int main() {
   // ios_base::sync_with_stdio(0); cin.tie(0);
    while(1){
    cin >> n >> k >> s;
    if(!n && !s && !k) break;
    ans = 0;
    Try(1);
    cout << ans << endl;
    }
}