// #include<bits/stdc++.h>

// using namespace std;
// string stt[10000000] ={};
// int main() {
//     int i = 0;
//     ifstream fp1;
//     fp1.open("VANBAN.in");
//     set<string> s;
//     while(!fp1.eof()) {
//         string s;
//         fp1 >> s;
//         stt[i++] = s;
//     }
//     fp1.close();
//     for(int j = 0; j < i;j++) {
//         transform(stt[j].begin(), stt[j].end(), stt[j].begin(), :: tolower);
//         s.insert(stt[j]);
//     }
//     for(string x : s) cout << x << endl;
// }

#include<bits/stdc++.h>

using namespace std;
int b[100005] = {0}, k = 0;
int main() {
    ifstream fp1;
    fp1.open("DATA.in");
    int a[100005], n;
    while(fp1 >> n) {
        a[k++] = n;
    }
    fp1.close();
    sort(a,a + k);
    for(int i = 0; i < k;i++) {
        b[a[i]]++;
    }
    for(int i = 0; i < k;i++){
        if(b[a[i]] != 0) {
            cout << a[i] << " " << b[a[i]] << endl;
            b[a[i]] = 0;
        }
    }
}


// #include<bits/stdc++.h>

// using namespace std;

// int check(string s){
// 	if(s.size()>10) return 0;
// 	for(int i =0 ; i<s.size();++i) if(s[i]<'0'||s[i]>'9') return 0;
// 	return 1;
// }

// int main() {
//     ifstream fp1;
//     fp1.open("DATA.in");
//     long long sum = 0;
//     string n;
//     while(fp1 >> n) {
//         if(check(n)) sum = sum + stoi(n);
//     }
//     fp1.close();
//     cout << sum;
// }