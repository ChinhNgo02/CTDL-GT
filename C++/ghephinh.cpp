#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int a[10];
    int S = 0, r = 0;
    for(int i = 0; i < 6;i++) cin >> a[i];
    int max = a[0];
    for(int i = 0; i < 6;i++)
        if(max < a[i]) max = a[i];
    for(int i = 0; i < 2;i++) {
        for(int j = 2; j < 4;j++){
            for(int k = 4; k < 6;k++){
                if (((a[i]+a[j])==max) || ((a[i]+a[k])==max)|| ((a[k]+a[j])==max))
					S++;
				if ((a[i]==a[j]) &&(a[i]==a[k]))
					r++;
            }
        }
    }
    int Shv = max*max, DT=a[1]*a[0]+a[2]*a[3]+a[4]*a[5];
    if( (DT == Shv && S == 5) || (DT==Shv && r!=0)) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
}