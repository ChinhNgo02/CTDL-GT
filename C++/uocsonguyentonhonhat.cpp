#include<bits/stdc++.h>

using namespace std;
int xuat(int n){
    if(n==1) return 1;
    if(n % 2 == 0) return 2;
    for(int i = 3;i <= n;i+=2) if(n%i==0) return i;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n;i++){
            cout << xuat(i) << " ";
        }
        cout << endl;
    }
}