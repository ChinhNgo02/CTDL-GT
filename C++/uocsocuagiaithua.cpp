#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;
        int dem = 0;
        for(int i = 1; i <= n;i++){
            int a = i;
            while(a % p ==0){
                 dem++;
                 a /= p;
            }
        }
        cout << dem << endl;
    }
}