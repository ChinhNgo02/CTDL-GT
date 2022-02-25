#include<iostream>
using namespace std;
int n, A[20];
void in(int m){
    cout << "(";
    for(int i = 1; i <= m; i++){
        cout << A[i];
        if(i != m ) cout << " ";
    }
    cout << ") ";
}
void Try(int i, int j, int s){
    int k;
    for(k = j; k >= 1; k--){
        if(s + k <= n){
            A[i] = k;
            s = s + k;
            if(s == n) in(i);
            else Try(i+1, k, s);
            s = s - k;
        }
    }
}
main(){
    int t;
    cin >> t;
    while(t--) {
    cin >> n;
    Try(1, n, 0);
    cout << endl;
    }
}