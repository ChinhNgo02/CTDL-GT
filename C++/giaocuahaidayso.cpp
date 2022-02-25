// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//         int n, m;
//         cin >> n >> m;
//         int a[n], b[m];
//         set<int>s;
//         set<int>v;
//         for(int i = 0; i < n;i++){
//             cin >> a[i];
//             s.insert(a[i]);
//         }
//         int k =0;
//         for(int i = 0; i < m;i++){
//             cin >> b[i];
//             v.insert(b[i]);
//             // if((n+i-s.size()) == k){
//             //     v.insert(b[i]);
//             //     k++;
//             // }
//         }
//         for(int y :s){
//             for(int x : v){
//                 if(x == y) cout << y << " ";
//             }
//         } 
//         cout << endl;
// }

#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int dem=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){dem++;
				}
			}
			if(dem>0){
                cout<<a[i] << endl;;
			    break;
			}
		}
		if(dem==0)cout<< "NO" << endl;
	}
}