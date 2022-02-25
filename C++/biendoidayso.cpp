#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        for(int i = 0; i < n;i++) cin >> a[i];
        int count = 0, dau = 0, cuoi = n-1;
        while(dau <= cuoi){
            if(a[dau] == a[cuoi]){
                dau++;
                cuoi--;
            }
            else if(a[dau] < a[cuoi]){
                dau++;
                a[dau] += a[dau-1];
                count++;
            }
            else{
                cuoi--;
                a[cuoi] += a[cuoi+1];
                count++;
            }
        }
        cout << count << endl;
    }
}