#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n+5];
        for(int i = 0; i < n;i++) cin >> a[i];
        int check = 0, output = a[1]-a[0];
        for(int i = 0; i < n-1;i++){
            for(int j = i+1; j < n;j++){
                if(output < (a[j]-a[i])){
                    check = 1;
                    output = a[j]-a[i];
                }
            } 
       }
       if(check == 1) cout << output << endl;
       else cout << output << endl;
    }
    return 0;
}