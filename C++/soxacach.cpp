#include<bits/stdc++.h>

using namespace std;

int n, A[12], B[12];
void in(){ int dem=0;
    for(int i = 1; i <= n-1; i++){
        if(abs(A[i+1]-A[i])!=1){dem++;
		}
    }
    if(dem==n-1){for(int i = 1; i <= n; i++){
    	cout<<A[i];
	}
	cout<<endl;
	}   
}
void Try(int i){
    int j;
    for(j = 1; j <= n; j++){
        if(B[j] == 0){
            A[i] = j;
            B[j] = 1;
            if(i == n) in();
            else Try(i+1);
            B[j] = 0;
        }
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n;
	Try(1);	
	}
}