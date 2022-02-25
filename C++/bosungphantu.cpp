#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, dem = 0;
        cin >> n;
        long long A[n];
        for(long long i = 0; i < n;i++) cin >> A[i];
        sort(A, A+n);
        for(long long i = 0; i < n-1;i++){
            if(A[i]==A[i+1]) dem++;
        }
        if(dem == 0) cout << A[n-1]-A[0]+1-n <<endl;
        else cout << A[n-1]-A[0]+1-n+dem << endl;
    }
}
