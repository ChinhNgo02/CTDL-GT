#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        for(int i = 0; i < n;i++)  cin >> a[i];
        sort(a,a+n);
        int count = 0;
        for(int k = 1; k <= a[0];k++){
            int tmp = a[0]%k, dem = 0;
            for(int i = 0; i < n;i++){
                if((a[i]%k) != tmp) break;
                else dem++;
            }
            if(dem == n-1) count++;
        }
        cout << count << endl;
    }
}