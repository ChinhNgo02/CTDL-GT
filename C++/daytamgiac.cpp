#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        vector < long long > x;
        for(int i = 0; i < n;i++){
            long long b;
            cin >> b;
            x.push_back(b);
        }
        sort(x.begin(), x.end());
        cout << x[n-1] << endl;
    }
    return 0;
}