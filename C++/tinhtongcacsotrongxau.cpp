#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int a[10001] ={0}, k = 0;
        long long sum = 0, check = 0;
        for(int i = 0;i < s.length();i++){
            if(s[i] >= '0' && s[i] <= '9'){
                a[k] = a[k]*10 + s[i]-'0';
                check = 1;
            }
            else if(check != 0){
                k++;
                check = 0;
            }
        }
        for(int i = 0; i <= k;i++){
            sum += a[i];
        }
        cout << sum << endl;
    }
}