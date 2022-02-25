#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        long long sum = 0, a;
        for(int i = 0; i < s.length();i++) sum += s[i] - '0';
        while(sum > 9){
            long long n = 0;
            while(sum){
                n += sum %10;
                sum /= 10;
            }
            sum = n;
        }
        if(sum == 9) cout << 1 << endl;
        else cout << 0 << endl;
    }
}