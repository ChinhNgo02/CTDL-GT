#include <bits/stdc++.h> 
using namespace std; 
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int m=n*4;
		int h1=m*m/2+m/2;
		int h2=h1-m+1;
		//h1
		cout<<h1<<" ";
		int dem=2;
		while(dem<m){
			int dem1=dem,dem2=dem;
			while(dem1--){
				h1=h1-m;cout<<h1<<" ";
			}
			while(dem2--){
				h1++;cout<<h1<<" ";
			}
			dem=dem+2;
			int dem3=dem,dem4=dem;
			if(dem3==m) break;
			while(dem3--){
				h1=h1+m;cout<<h1<<" ";
			}
			while(dem4--){
				h1--;cout<<h1<<" ";
			}
			dem=dem+2;
		}
		for(int i=2;i<=m;i++){
			h1=h1+m;
			cout<<h1<<" ";
		}
		//h2
		cout<<endl;
		cout<<h2<<" ";
		int d=2;
		while(d<m){
			int d1=d,d2=d;
			while(d1--){
				h2=h2+m;cout<<h2<<" ";
			}
			while(d2--){
				h2--;cout<<h2<<" ";
			}
			d=d+2;
			int d3=d,d4=d;
			if(d3==m) break;
			while(d3--){
				h2=h2-m;cout<<h2<<" ";
			}
			while(d4--){
				h2++;cout<<h2<<" ";
			}
			d=d+2;
		}
		for(int i=2;i<=m;i++){
			h2=h2-m;
			cout<<h2<<" ";
		}
		cout<<endl;
	}
}