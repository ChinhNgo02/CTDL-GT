#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		int m,n,p;
		cin>>m>>n>>p;
		long long a[m],b[n],c[p];
		for(int i=1;i<=m;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		for(int i=1;i<=p;i++){
			cin>>c[i];
		}
		int d=1,e=1,f=1;
		vector<int> v;
		while(d<=m && e<=n && f<=p){
			if(a[d]==b[e] && b[e]==c[f]){
				v.push_back(a[d]);
				d++;e++;f++;
			}
			else if(a[d]<=b[e] &&a[d]<=c[f]){
				d++;
			}
			else if(b[e]<=a[d] && b[e]<=c[f]){
				e++;
			}
			else{
				f++;
			}
		}
		if(v.size()==0){
			cout<<"-1";
		}
		else{
			for(int i=0;i<v.size();i++){
			    cout<<v[i]<<" ";
		    }
		}
		cout<<endl;
	}
}