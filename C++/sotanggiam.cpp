#include<bits/stdc++.h>
using namespace std;
int tang(long n){
	while (n>=10){
		if (n%10<=(n/10)%10)
		return 0;
		n/=10;
	}
	return 1;
}
int giam(long n){
	while (n>=10){
		if (n%10>=(n/10)%10)
		return 0;
		n/=10;
	}
	return 1;
}
int nt(long n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
		if (n%i==0)
		return 0;
	return 1;
}
int main(){
	int n;
	cin>>n;
	while (n--){
		int m;
		cin>>m;
		long a=pow(10,m-1);
		long b=pow(10,m);
		int dem=0;
		for (long i=a;i<b;i++){
			if ((tang(i)&&nt(i))||(giam(i)&&nt(i)))
			dem++;
		}
		cout<<dem<<endl;
	}
}