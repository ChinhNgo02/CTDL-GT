#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; 
    cin>>test;
    while(test--){ 
		int n,x;
		cin>>n>>x;
		int a[n];
		long long tong=0;
	    for(int i=0;i<n;i++) {
		    cin>>a[i];
		    tong+=a[i];
	    }
	    if(tong<x) cout<<-1;
	    else if(tong==x) cout<<n;
	    else{
		    int min=1000000,check=0;
		    for(int i=0;i<n;i++){
			    long long sum=0;
			    for(int j=i;j>=0;j--){
				    sum+=a[j];
				    if(sum>x){
					    if(i-j+1<min) min=i-j+1;
					    check=1;
					    break;
				    }
			    }
		    }
		    if(check==0) cout<<-1;
		    else cout<<min;
	    }
        cout<<endl;
    } 
}