#include<iostream>
using namespace std;
 
void nhap(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) cin>>a[i][j];
	}
}
 
void xuly(int a[100][100],int kq[100][100],int m,int n){
	int count=0,p=0,hang=m,cot=n;
	while(count<m*n){
        if(count==(m*n-1)){
			kq[p][p]=a[p][p];
		    break;
		}
		for(int i=p+1;i<cot;i++){ kq[p][i]=a[p][i-1]; count++;}
		for(int i=p+1;i<hang;i++){ kq[i][cot-1]=a[i-1][cot-1]; count++;}
		for(int i=cot-2;i>=p;i--){ kq[hang-1][i]=a[hang-1][i+1]; count++;}
		for(int i=hang-2;i>=p;i--){ kq[i][p]=a[i+1][p]; count++;}
		p++; hang--; cot--;
	}
}
 
void xuat(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
	}
}
 
int main(){
	int test;
	cin>>test;
	while(test--){
		int a[100][100],kq[100][100],m,n;
		cin>>m>>n;
		nhap(a,m,n);
		xuly(a,kq,m,n);
		xuat(kq,m,n);
		cout<<endl;
	}
	return 0;
}