#include <bits/stdc++.h>
#define r 1000000007
using namespace std;

int main (){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[3000]={};
		for (int i=0; i<n; i++)
			cin >> a[i];
		long long xx=1;
		long long sum = a[n-1];
		for (int i=n-2; i>=0; i--){
			xx = ( (xx%r)*(x%r) )%r;
			sum = (sum + (xx*a[i])%r)%r;
		}
		cout << sum << endl;
	}
}
