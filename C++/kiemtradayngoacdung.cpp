#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--)  {
        string s;
        cin >> s;
        stack<char> v;
        int check = 1;
        for(int i = 0; i < s.length();i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                v.push(s[i]);
            else if(s[i] == '}') 
            {
                if(v.size() == 0) check = 0;
                else if( v.top() == '{') v.pop();
            }
            else if(s[i] == ']') 
            {
                if(v.size() == 0) check = 0;
                else if( v.top() == '[') v.pop();
            }
            else if(s[i] == ')') 
            {
                if(v.size() == 0) check = 0;
                else if( v.top() == '(') v.pop();
            }
        }
        if(v.size() > 0) check = 0;
        if( check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}