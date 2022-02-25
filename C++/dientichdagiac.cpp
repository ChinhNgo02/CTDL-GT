#include<bits/stdc++.h>
using namespace std;

struct dientich{
	int x,y;
};

void nhap(dientich &a){
	cin>>a.x>>a.y;
}

double tinh(dientich a,dientich b,dientich c){
	double ab=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	double bc=sqrt((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
	double ac=sqrt((a.x-c.x)*(a.x-c.x)+(a.y-c.y)*(a.y-c.y));
	double p=1.0*(ab+bc+ac)/2;
	double s=sqrt(p*(p-ab)*(p-bc)*(p-ac));
	return s;
}

void result(dientich *a,int n){
	double sum=0;
	for(int i=1;i<n-1;i++){
		sum+=tinh(a[0],a[i],a[i+1]);
	}
	cout<<fixed<<setprecision(3)<<sum<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	dientich diem[1005];
	int q;
	cin>>q;
	for(int i=0;i<q;i++) nhap(diem[i]);
	result(diem,q);
	}
    return 0;
}