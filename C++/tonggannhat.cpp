#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	int n, m=0, k;
	cin >> n >> k;
	int a[n + 5];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l,r;
	sort(a ,a + n);
	for(int i = n-1; i >= 2; i--){
        l=0;r=i-1;
        while(l<r){
        	if(a[l]+a[r]+a[i]<=k){
        	m=max(a[l]+a[r]+a[i],m);
        	l++;
		    }
			else r--;
		    if(m==k) break;
		}
		if(m==k) break;
		}
	cout<<m<<endl;
	}
}