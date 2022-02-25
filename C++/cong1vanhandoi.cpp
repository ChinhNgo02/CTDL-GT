#include<bits/stdc++.h>
 using namespace std;

  int main(){
       int t;
        cin>>t; 
        while(t--){
             int n; 
             cin>>n; 
             int a[n];
              for(int i = 0; i < n;i++) cin >> a[i];
              int dem=0; 
              int m=0;
               for(int i=0;i<n;i++){ 
                   int count=0;
                    int x=a[i];
                     while(x>0){ 
                        if(x%2==0){
                              x/=2; 
                              count++; 
                        }
                        if(x%2==1){
                            x-=1; 
                            dem++; 
                        } 
                    }
                  m=max(m,count); 
                } 
             cout<<m+dem<<endl;
            } 
  }