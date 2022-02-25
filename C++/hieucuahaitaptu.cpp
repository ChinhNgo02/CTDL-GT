// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//   int t;
//   cin >> t;
//   cin.ignore();
//   while(t--){
//     string s1, s2;
//     getline(cin, s1);
//     getline(cin, s2);
//     stringstream s;
//     stringstream ss;
//     string tmp ="";
//     string key ="";
//     s << s1, ss << s2;
//     vector< string >res;
//     vector< string >res1;
//     while(s >> tmp) res.push_back(tmp);
//     while(ss >> key) res1.push_back(key);
//     for(int i = 0; i < res.size();i++){
//         for(int j = i+1; j < res.size();j++){
//           if(res[i] > res[j]) swap(res[i], res[j]);
//         }
//     }
//     vector < string > solve;
//     for(int i = 0; i < res.size();i++){
//         int check = 0;
//         for(int j = 0; j < res1.size();j++){
//             if(res[i] == res1[j]){
//                 check = 1;
//                 break;
//             }
//         }
//         if(check == 0){
//             solve.push_back(res[i]);
//         }
//     }
//     for(int i=0; i<solve.size(); i++){
//         int check=0;
//         for(int j=i+1; j<solve.size(); j++){
//             if(solve[i]==solve[j]){
//                 check=1;
//                 break;
//             }
//         }
//         if(check==0){
//             cout << solve[i] << " ";
//         }
//     }
//   cout << endl;
//   }
// }

#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    stringstream s;
    stringstream ss;
    string tmp ="";
    string key ="";
    s << s1, ss << s2;
    set< string >res;
    set< string >res1;
    while(s >> tmp) res.insert(tmp);
    while(ss >> key) res1.insert(key);
    for(int it=ré.begin(); it!=ré.end(); ++it) {
        int check = 0;
        for(int j = 0; j < res1.size();j++) {
            if(res[i] ==  res1[j]){
                check = 1;
                 break;
            }
        }
        if(check == 0) cout << res[i] << " ";
    }
    cout <<endl;
  }
}