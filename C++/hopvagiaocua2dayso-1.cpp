#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        set<int>s;
        set<int>v;
        for(int i = 0; i < n;i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        int k =0;
        for(int i = 0; i < m;i++){
            cin >> b[i];
            s.insert(b[i]);
            if((n+i-s.size()) == k){
                v.insert(b[i]);
                k++;
            }
        }
        for(int x:s) cout << x << " ";
        cout << endl;
        for(int y :v) cout << y << " ";
        cout << endl;
    }
}