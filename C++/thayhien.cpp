#include<bits/stdc++.h>

using namespace std;
#define a() a

class ThangNam {
    private:
    int thang, nam;
    public:
        friend istream &operator >> (istream &is, ThangNam &a) {
            cin >> a.thang;
            cin >> a.nam;
            return is;
        }
        friend ostream &operator << (ostream &os, ThangNam &a) {
            cout << a.thang << "/" << a.nam << endl;
            return os;
        }

};
int main() {
    ThangNam a();
    cin >> a;
    cout << a;
    return 0;
}