#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int b[n]={0},dem=0;	
		
		for(int i=0;i<n;i++){
			b[i]=1;
			for(int j=0;j<i;j++){
				if(a[i]>a[j]) b[i]=max(b[i],b[j]+1);
			}
			dem=max(dem,b[i]);
		}
		cout<<dem<<endl;
	}
}

