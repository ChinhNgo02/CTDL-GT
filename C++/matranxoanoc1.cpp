#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int b[n*n] = {};
        for(int i = 0; i < n;i++){
            for(int j = 0; j < m;j++){
                cin >> a[i][j];
            }
        }
        int d = 0, hang = n-1, cot = m-1, count = 0, dem = 0, max = n*m;
        while(d<=n/2 ){
		for(int i=d; i<=cot; i++){
			cout << a[d][i] << " ";
			dem++;
		}
		if(dem == max) break;
		for(int i=d+1; i<=hang; i++) {
			cout << a[i][cot] << " ";
			dem++;
		}
		if(dem == max) break;
		for(int i=cot-1; i>=d; i--){
		    cout << a[hang][i] << " ";
			dem++;
		}
		if(dem == max) break;
		for(int i=hang-1; i>=d+1; i--){
			cout << a[i][d] <<" ";
			dem++;
		}
		if(dem == max) break;
		d++; hang--; cot--;
	}
    cout << endl;
    }
	return 0;
}