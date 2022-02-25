#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n;i++) cin >> a[i];
        for(int i = 0; i < n;i++){
            if(a[i+1] != 0 && a[i] == a[i+1]){
                a[i] = a[i]*2;
                a[i+1] = 0;
            }
            else a[i] = a[i];
        }
        int k = 0;
        for(int i = 0; i < n;i++){
            if(a[i] != 0){
                cout << a[i] << " ";
                k++;
            }
        }
        for(int i = k; i < n;i++) cout << 0 << " ";
        cout << endl;
    }
}