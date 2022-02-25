#include<bits/stdc++.h>
#define MAX 20
using namespace std;

int n, k;
int A[MAX];
 int a[MAX]={0};
void xuat(){
    for(int i = 1; i <= k;i++) cout << A[i] <<" ";
    cout << endl;
}
int x = 0;
void check(int c, int b[], int k){
    for(int i = 1; i <= n;i++){
        if(a[i] == 0 && x < b[i]){
            A[c] = b[i];
            x = b[i];
            a[i] = 1;
            if(c == k) xuat();
            else check(c+1, b, k);
            a[i] = 0;
            x = 0;
        }
    }
}

int main(){
        int t;
        cin >> t;
        while(t--) {
        cin >> n >> k;
        int b[n + 5];
        for(int i = 1; i <= n;i++) cin >> b[i];
        sort(b+1, b+n+1);
        check(1, b, k);
        }
}
