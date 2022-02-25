// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--)
//     {
//         string myStr;
//         getline(cin, myStr);
//         int n = myStr.size();
//         int i, j = n - 1;

//         for (i = n - 1; i >= 0; i--)
//         {
//             if (myStr[i] == ' ')
//             {
//                 for (int pos = i + 1; pos <= j; pos++)
//                     cout << myStr[pos];
//                 j = i - 1;
//                 cout << " ";
//             }
//             if (i == 0)
//             {
//                 for (int pos = i; pos <= j; pos++)
//                     cout << myStr[pos];
//             }
//         }
//         cout << endl;
//     }
// }

// #include<bits/stdc++.h>

// using namespace std;

// #define mod 1000000007

// int main(){
//     int t;
//     cin >> t;
//     cin.ignore();
//     while(t--){
//         string myStr;
//         getline(cin, myStr);
//         int n = myStr.size();
//         int i , j = n - 1, k = 0;
//         for (i = 0; i <= n; i++)
//         {
//             if (myStr[i] == ' ')
//             {
//                 for (int pos = i -1; pos >= k; pos--)
//                     cout << myStr[pos];
//                 k = i+1;
//                 cout << " ";
//             }
//             if(myStr[i] == '\0') {
//                 for(int pos = i-1; pos >= k; pos--)
//                      cout << myStr[pos];
//             }
//         }
//         cout << endl;
//     }
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream s1(s);
        string s2;
        vector<string> ss;
        while (s1 >> s2)
        {
            ss.push_back(s2);
        }
        for (int i = ss.size() - 1; i >= 0; i--)
        {
            cout << ss[i] << " ";
        }
        cout << endl;
    }
}
