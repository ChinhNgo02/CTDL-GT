// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ifstream f("DATA1.in");
//     ifstream f1("DATA2.in");
//     string x;
//     set<string> a;
//     map<string, int> mp;
//     while (f >> x)
//     {
//         transform(x.begin(), x.end(), x.begin(), ::tolower);
//         mp.insert({x, 1});
//         a.insert(x);
//     }
//     f.close();
//     while (f1 >> x)
//     {
//         transform(x.begin(), x.end(), x.begin(), ::tolower);
//         if (mp[x] == 1)
//             mp[x] = 2;
//         a.insert(x);
//     }
//     f1.close();
//     for (auto y : a)
//         cout << y << " ";
//     cout << endl;
//     for (auto y : mp)
//         if (y.second == 2)
//             cout << y.first << " ";
// }

#include <bits/stdc++.h>

using namespace std;
int a[], b[];
int main()
{
    ifstream fp1("DATA.in");
    int n;
    while (fp1 >> n)
    {
        
    }
}