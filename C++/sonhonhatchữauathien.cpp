#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int A[n];
        for(int  i = 0; i < n;i++) cin >> A[i];
        int count = 1;
        while(true){
            int check = 1;
            for(int i = 0; i < n;i++){
                if(A[i] == count){
                    check = 0;
                    break;
                }
            }
            if(check == 0) count++;
            else break;
        }
        cout << count << endl;
    }
    return 0;
}