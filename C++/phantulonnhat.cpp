#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, k;
        cin >> n >> k;
        long long A[n];
        for(int i = 0; i < n;i++) cin >> A[i];
        sort(A, A+n, greater<int>());
        for(int i = 0; i < k;i++) cout << A[i] << " ";
        cout << endl;
    }
    return 0;
}