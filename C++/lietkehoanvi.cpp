#include<bits/stdc++.h>
#define MAX 20
using namespace std;

int n;
int A[MAX];
 int a[MAX]={0};
void xuat(){
    for(int i = 1; i <= n;i++) cout << A[i];
    cout << " ";
}

void check(int k){
    //int a[MAX]={0};
    for(int i = 1; i <= n;i++){
        if(!a[i]){
            A[k] = i;
            a[i] = 1;
            if(k == n) xuat();
            else check(k+1);
            a[i] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        check(1);
        cout << endl;
    }
}