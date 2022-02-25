#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int A[n];
        for(int i = 0; i < n;i++) cin >> A[i];
        int dem = 0;
        for(int i = 0; i < n-1;i++){
            for(int j = i+1; j < n;j++){
                if((A[i]+A[j]) == k) dem++;
            }
        }
        cout << dem << endl;
    }
}