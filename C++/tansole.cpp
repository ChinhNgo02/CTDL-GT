#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 5], b[100001]={};
        for(int i = 0; i < n;i++){
            cin >> a[i];
            b[a[i]]++;
        }
        for(int i = 0; i < n;i++){
            if(b[a[i]] % 2 == 1){
                cout << a[i] << endl;
                break;
            }
        }
    }
}