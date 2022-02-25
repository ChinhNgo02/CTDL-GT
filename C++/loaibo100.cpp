// #include <bits/stdc++.h>

// using namespace std;

// int t;

// void process(){
// 	string v;
// 	cin>>v;
// 	vector<pair<char, int>>a;
// 	int m=0;
// 	for(int u=0; u < v.size(); ++u){
// 		a.push_back({v[u],u});
// 		while(a.size()>=3 && a[a.size()-3].first=='1' && a[a.size()-2].first=='0' && a[a.size()-1].first=='0'){
// 			for(int i=0; i<3; ++i) a.pop_back();
// 		}
// 		m=max(m,u-a.back().second);
// 	}
// 	cout<<m<<endl;
// }

// int main(){
// 	cin >> t;
// 	while(t--){
// 		process();
// 	}
// }

#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#define mod 1000000007
#define PI 3.141592653589793238

using namespace std;
int k;
int main() { 
	cin >> k; 
	while(k--) { 
		string xau;
		cin >> xau;
		int i = 2;
		int xoa = 0;
		while (i < xau.length()){
			if ( xau[i-2] == '1' && xau[i-1] =='0' && xau[i] == '0'){
				xoa++;
				xau.erase(i-2,3); // xoa 3 ky tu tu index i;
				i = 2;		
			}
			else i++;
		}
		cout << xoa * 3 << endl;
	} 	
}