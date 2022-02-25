#include<bits/stdc++.h>
using namespace std;

void dele(vector<int> v,vector<int> v_fake)
{
    for(int i=0;i<v_fake.size()-1;i++){
        v.push_back(v_fake[i]);
        for(int j=i+1;j<v_fake.size();j++){
            if(v_fake[j]==v_fake[i]) {
                v.push_back(v_fake[j]);
                v_fake.erase(v_fake.begin()+j);
            }
        }
    }
}

int main(){
  //  ios_base::sync_with_stdio(0); cin.tie(0);
    int q;
    cin>>q;
    while(q--){ 
        int m,n;
        cin>>m>>n;
        int a,b;
        vector<int> v1;
        vector<int> v2;
        for(int i=1; i<=m; i++) {
            cin>>a;
            v1.push_back(a);
        }
        for(int i=1;i<=n;i++){
            cin>>b;
            v2.push_back(b);
        }
        int len2=v2.size();
        for(int i=0;i<v2.size();i++){
            for(int j=0;j<v1.size();j++){
                if(v1[j]==v2[i]){
                    cout<<v1[j]<<" ";
                    v1.erase(v1.begin()+j);
                    j-=1;
                }
            }
        }
        int len1=v1.size();
        if(len1>0){
            sort(v1.begin(),v1.end());
            for(int i=0;i<len1-1;i++) cout<<v1[i]<<" ";
            cout<<v1[len1-1];
        }
        cout<<endl;
    }
}