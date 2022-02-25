#include<bits/stdc++.h>

using namespace std;
int k;
char C[30];
char n;
void in(){
    int check = 0;
    for(int i = 1; i < k;i++){
        if(C[i] > C[i+1]){ check = 1;
        break;}
    }
    if(check == 0){
    for(int i=1;i<=k;i++){
         cout << C[i];
    }
    cout << endl;
    }
}
int x = 1;
void Try(int i){
    int j;
    int m = (int)n - 64;
    for(j = x; j <= m ; j++){
        C[i] = char(64+j);
        if(i == k) in();
        else Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    Try(1);
}