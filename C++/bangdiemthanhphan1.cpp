#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int count=0;
	int b[n]={0};
	for(int i=0;i<n;i++){
		if(a[i][0]==a[i][1]){
				b[i]+=1;
			}
		}
	for(int i=0;i<n;i++){
		if(b[i]==b[i+1]==b[i+2]==1) count=1;
	}
	if(count==1) printf("YES");
	else printf("NO");
	return 0;
}
