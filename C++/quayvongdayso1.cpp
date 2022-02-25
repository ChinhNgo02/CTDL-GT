#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, d;
        cin >> n >> d;
        long long A[n];
        for(int i = 0; i < n;i++) cin >> A[i];
        for(int i = d; i < n;i++) cout << A[i] << " ";
        for(int i = 0; i < d;i++) cout << A[i] << " ";
        cout << endl;
    }
}