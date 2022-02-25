#include<bits/stdc++.h>
using namespace std;

typedef struct human{
	char name[15],date[11];
	int list[3]={0};	
};

void getdate(human &a){
	int i=0;
	char *p=strtok(a.date,"/");
	while(p!=NULL){
		for(int j=0;j<strlen(p);j++)
			a.list[i]=a.list[i]*10+(p[j]-'0');
		i++;
		p=strtok(NULL,"/");
	}
}

main(){
	int n;
	cin>>n;
	human ds[n];
	for(int i=0;i<n;i++){
		cin.ignore();
		cin>>ds[i].name>>ds[i].date;
		getdate(ds[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].list[2]<ds[j].list[2]) swap(ds[i],ds[j]);
			else if(ds[i].list[2]==ds[j].list[2]){
				if(ds[i].list[1]<ds[j].list[1]) swap(ds[i],ds[j]);
				else if(ds[i].list[1]==ds[j].list[1]){
					if(ds[i].list[0]<ds[j].list[0]) swap(ds[i],ds[j]);
				}
			}
		}
	}
	
	cout<<ds[0].name<<endl<<ds[n-1].name<<endl;
}