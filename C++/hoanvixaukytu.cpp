#include<bits/stdc++.h>
#define MAX 20
using namespace std;

string n;
char A[MAX];
 int a[MAX]={0};
void xuat(){
    for(int i = 0; i < n.length();i++) cout << A[i];
    cout << " ";
}

void check(int k){
    for(int i = 0; i < n.length();i++){
        if(!a[i]){
            A[k] = n[i];
            a[i] = 1;
            if(k == (n.length()-1)) xuat();
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
        check(0);
        cout << endl;
    }
}

