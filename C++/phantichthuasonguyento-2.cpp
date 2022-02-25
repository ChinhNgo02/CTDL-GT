// #include <iostream>
// #include <algorithm>
// #include <numeric>
// #include <bits/stdc++.h>
// using namespace std;


// int snt(long long n){
// 	if(n<2) return 0;
// 	for(int i=2; i<=sqrt(n); i++)
// 		if(n%i==0) return 0;
// 	return 1;	
// }

// int main(){
// 	long long n,k=0;
// 	cin >> n;
// 	long long a[1000], b[1000]={};
// 	while (n>1){
// 		if(snt(n)==1){
// 			if(n==a[k]) b[k]++;
// 			else{
// 				k++;
// 				a[k]=n;
// 				b[k]++;
// 			}
// 			break;
// 		}
// 		for (int i=2; i<=n/2; i++){
// 			if(n%i==0){
// 				if(i==a[k]) b[k]++;
// 				else{
// 					k++;
// 					a[k]=i;
// 					b[k]++;
// 				}
// 				n/=i;
// 				break;
// 			}	
// 		}
// 	}
// 	for (int i=1; i<=k; i++)
// 		cout << a[i] << " " << b[i] << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
	
		long m;
		cin>>m;
        
        int d=0;
        while (m%2==0){
			d++;
			m/=2;
		}
        if(d>0){ cout<<2<<" "<<d<<endl;
        }
		for (long i=3;i<=sqrt(m);i+=2){
            d=0;
			while (m%i==0){
				d++;
				m/=i;
                
			}
            if(d>0) {cout<<i<<" "<<d<<endl;}
		}
        if(m>2) {cout<<m<<" "<<1<<endl;        }
        
}