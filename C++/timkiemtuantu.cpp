#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, X;
        cin >> n >> X;
        long long A[n+1], dem = 0;
        for(long long i = 1; i <= n;i++) cin >> A[i];
        for(long long i = 1; i <= n;i++){
            if(A[i] == X) 
            {
               dem = 1;
               break;
        }
    }
     if(dem == 0) cout << "-1" << endl;
     else cout << "1" << endl;
}
}
