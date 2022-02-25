#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int k;
        cin >> k;
        int n= s.length();
        int count = 0;
        for(int i=0;i<=n-k;i++){
            set <char> s1;
            for(int j=i;j<n;j++){
                s1.insert(s[j]);
                if(s1.size()==k){
                    count++;
                }
                else if(s1.size()>k){
                    break;
                }
            }
        }
        cout << count << endl;
    }
}