#include<iostream>
using namespace std;
int A[15], C[15][15], n = 8, maxx; bool B[15], Xuoi[25], Nguoc[25];
void capnhat(){
    int t = 0;
    for(int i = 1; i <= n; i++){
        t = t + C[i][A[i]];
    }
    if(t > maxx) maxx = t;
}
void Try(int i){
    int j;
    for(j = 1; j <= n; j++){
        if(!B[j] && !Xuoi[i-j+n] && !Nguoc[i+j-1]){
            A[i] = j;
            B[j] = true; Xuoi[i-j+n] = true; Nguoc[i+j-1] = true;
            if(i == n) capnhat();
            else Try(i + 1);
            B[j] = false; Xuoi[i-j+n] = false; Nguoc[i+j-1] = false;
        }
    }
}
main(){
    int t,i,j;
    cin >> t;
    while(t--){
        maxx = 0;
        for(i = 1; i <= 10; i++) B[i] = false;
        for(i = 1; i <= 20; i++) {
            Xuoi[i] = false; Nguoc[i] = false;
        }
        for(i=1;i<=n;i++) for(j=1;j<=n;j++) cin >> C[i][j];
        Try(1);
        cout << maxx << endl;
    }

}