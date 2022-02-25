#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n;i++) cin >> a[i];
        for(int i = 0; i < n;i++) cin >> b[i];
        int max = 1, h = 0;
        for( int i = 0; i < n ;i++){
            int A = 0, B = 0;
            for(int j = i; j < n;j++){
                A += a[j];
                B += b[j];
                if(A == B) h = j-i+1;
            }
            if(h > max) max = h;
        }
        cout << max << endl;
    }
}