#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        long long A[n];
        for(long long i = 0; i < n;i++) cin >> A[i];
        sort(A, A+n);
        long long min = 1e12;
        for(long long i = 1; i < n;i++){
            if((A[i]-A[i-1]) < min)
             min = A[i]-A[i-1];
        }
        cout << min << endl; 
    }
    return 0;
}