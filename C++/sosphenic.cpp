#include<bits/stdc++.h>

using namespace std;

int check(int n){
    int check = 0, k = 0;
    for(int i = 2; i <=n;i++){
        int dem = 0;
        while(n%i==0){
            dem++; k++;
            if(dem > 1){
                check = 1;
                break;
            }
            n /=i;
        }
        if(check == 1) return 0;
    }
    if(check ==  0 && k == 3) return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout <<check(n) << endl;
    }
}