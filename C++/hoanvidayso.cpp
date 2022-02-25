#include<bits/stdc++.h>
#define MAX 20
using namespace std;

int n;
int A[MAX];
 int a[MAX]={0};
void xuat(){
    for(int i = 1; i <= n;i++) cout << A[i] <<" ";
    cout << endl;
}

void check(int k, int b[]){
    for(int i = 1; i <= n;i++){
        if(!a[i]){
            A[k] = b[i];
            a[i] = 1;
            if(k == n) xuat();
            else check(k+1, b);
            a[i] = 0;
        }
    }
}

int main(){
        cin >> n;
        int b[n + 5];
        for(int i = 1; i <= n;i++) cin >> b[i];
        sort(b+1, b+n+1);
        check(1, b);
}