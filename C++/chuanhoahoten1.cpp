#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n;
        cin >> n;
        scanf("\n");
        string s;
        getline(cin, s);
        stringstream u;
        string tmp = "";
        vector<string>t;
        u << s;
        while(u >> tmp){
            t.push_back(tmp);
        }
        if(n == 1){
            string strS = t[t.size()-1];
            transform(strS.begin(), strS.end(),strS.begin(), ::tolower);
            strS[0] = toupper(strS[0]);
            cout << strS << " ";
            string strS1 = t[0];
            transform(strS1.begin(), strS1.end(),strS1.begin(), ::tolower);
            strS1[0] = toupper(strS1[0]);
            cout << strS1 << " ";
            for(int i = 1; i < t.size()-1;i++){
                string str = t[i];
                transform(str.begin(), str.end(),str.begin(), ::tolower);
                str[0] = toupper(str[0]);
                cout << str << " ";
            }
        }
        else if(n == 2){
            for(int i = 1; i < t.size()-1;i++){
                string str = t[i];
                transform(str.begin(), str.end(),str.begin(), ::tolower);
                str[0] = toupper(str[0]);
                cout << str << " ";
            }
            string strS = t[t.size()-1];
            transform(strS.begin(), strS.end(),strS.begin(), ::tolower);
            strS[0] = toupper(strS[0]);
            cout << strS << " ";
            string strS1 = t[0];
            transform(strS1.begin(), strS1.end(),strS1.begin(), ::tolower);
            strS1[0] = toupper(strS1[0]);
            cout << strS1 << " ";
        }
        cout << endl;
    }
}