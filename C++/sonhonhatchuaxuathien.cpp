#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n;i++) cin >> A[i];
        int x = 1;
        while(true){
            int check = 1;
            for(int i = 0; i < n;i++){
                if( A[i] == x){
                    check = 0;
                    break;
                }
            }
            if(check == 0) x++;
            else break;
        }
        cout << x << endl;
    }
}