#include<bits/stdc++.h>

using namespace std;
int A[20], n;
void xuat(){
    for(int i = 1; i <= n;i++) cout << A[i];
    cout << " ";
}

void nhap(int i){
    for(int j = 0; j <= 1;j++){
        A[i] = j;
        if(i == n) {
            xuat();
        }
        else nhap(i+1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        nhap(1);
        cout << endl;
    }
}
