#include<bits/stdc++.h>
using namespace std ;
#define MAX 1000000007 
long long a[1005][1005] ;
int main(){
    for(int i = 0 ; i <= 1000 ; i++){
		for(int j = 0 ; j <= i ; j++){
			if(i == 0 || j == 0){
				a[i][j] = 1 ;
			} else {
				a[i][j] = a[i-1][j-1] + a[i-1][j] ;
				a[i][j] = a[i][j] % MAX ;
			}
		}
	}
	int t;
	cin >> t ;
	while(t--){
		int m , n ; 
		cin >> m >> n ;
		cout << a[m][n] ;
		cout << endl ;
	}
}
