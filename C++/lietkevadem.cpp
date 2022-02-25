#include<bits/stdc++.h>

using namespace std;

int nt(int n){
    if( n < 2) return 0;
    for(int i = 2; i <= sqrt(n);i++) if(n % i == 0) return 0;
    return 1;
}

int check(int s){
    while(s){
        int a = s % 10;
        if(nt(a) == 0) return 0;
        s /= 10;
    }
    return 1;
}

int main(){
    int a;
    int key[50050];
    int count = 0;
    while(cin >> a){
        if(check(a)){
            key[count++] = a;
        }
    }
    for(int i = 0; i < count;i++){
        int dev = 0;
        for(int j = i; j < count;j++){
            if(key[i] == key[j]) dev++;
        }
        int trung = 0;
        for(int j = 0; j < i;j++){
            if(key[i] == key[j]){
                trung++;
                break;
            }
        }
        if(trung == 0){
            cout << key[i] << " " << dev << endl;
        }
    }
}