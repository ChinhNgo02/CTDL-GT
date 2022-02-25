#include<bits/stdc++.h>

using namespace std;

int nt(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n);i++) if(n % i == 0) return 0;
    return 1;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        int a, b;
        int count = 0;
        cin >> a >> b;
        for(int i = a;i <= b;i++){
            if(nt(i)) count++;
        }
        cout << count << endl;    
    }
}