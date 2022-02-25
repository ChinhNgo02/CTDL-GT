#include <bits/stdc++.h>  
using namespace std; 
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
int num(char c){
	return c - '0';
}
 
string add(string a, string b){
	while(a.length() < b.length()) a = "0" + a;
	while(a.length() > b.length()) b = "0" + b;
	int nho  = 0;
	string res ="";
	for(int i = a.length()-1; i>=0 ;i--){
		int tmp = num(a[i]) +num(b[i]) + nho;
		res = (char)(tmp%10+48) +res;
		nho = tmp/10;
	}
	if(nho > 0) res = "1" + res;
	return res;
}

bool check1(string s, int left, int len1, int len2){
	string s1 = s.substr(left, len1);
	string s2 = s.substr(left + len1, len2);
	string s3 = add(s1, s2);
	if(s3.length() >s.length() - s1.length() - left - s2.length()) return 0;
	if(s.substr(left + len1 + len2, s3.length()) == s3){
		if(left + len1 + len2 + s3.length() == s.length()) return 1;
		return check1(s, left + len1, len2, s3.length());
	}
	return 0;
}
 
void check2(){
	string s; cin >> s;
	bool ok = 0;
	for(int i = 1; i< s.length(); i++){
		for(int j = 1 ; j < s.length() - i; j++){
			if(check1(s, 0, i, j)){
				cout <<"Yes" << endl;;
				return ;
			}
		}
	}
	cout << "No" << endl;;
}
int main(){
	int t; cin >> t;
	while(t--){
		check2();
	}
}