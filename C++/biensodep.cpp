#include<bits/stdc++.h>
//29T1-123.45  2 9 T 1 - 1 2 3 4 5 . 
using namespace std;

int check1 (string s){
	for(int i = 5; i < s.length()-2;i++){
		if(s[i] >= s[i+1]) return 0;
	}
	return 1;
}

int check2 (string s){
	for(int i = 5; i < s.length()-2;i++){
		if(s[i] != s[i+1]) return 0;
	}
	return 1;
}

int check3 ( string s){
	if(s[5] == s[6] && s[6] == s[7] && s[8] ==s[9]) return 1;
	return 0;
}

int check4 ( string s){
	for(int i = 5; i < s.length()-1;i++){
		if(s[i] != '6' && s[i] != '8') return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		s[8] = s[9], s[9] = s[10];
		if (check1(s)==1 || check2(s)==1 || check3(s)==1 || check4(s)==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}