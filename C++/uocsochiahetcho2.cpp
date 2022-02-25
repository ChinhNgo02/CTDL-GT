#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, dem = 0;
        cin >> n;
        for(int i = 1; i <=sqrt(n);i++){
            if(n%i==0){
                int b = n / i;
                if(i % 2 == 0) dem++;
                if(i*i != n && b % 2 ==0) dem++;
            }
        }
        cout << dem << endl;
    }
}