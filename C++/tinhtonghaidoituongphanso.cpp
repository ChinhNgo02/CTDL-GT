#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	long long tu,mau;
	public: 
	    PhanSo(long long c,long long d){
		    tu=c;
		    mau=d;
	    };   
	    friend istream &operator>>( istream  &input, PhanSo &p ) { 
            input >> p.tu >> p.mau;
            return input;            
        }
        friend ostream &operator<<( ostream &output, PhanSo p) { 
            cout << p.tu <<"/" << p.mau << endl;
            return output;            
        }
        friend PhanSo operator +(PhanSo c, PhanSo d){
            c.tu = c.tu * d.mau + c.mau * d.tu;
            c.mau = c.mau * d.mau;
            long long UCLN = __gcd(c.tu, c.mau);
            c.tu /= UCLN;
            c.mau /= UCLN;
            return c;
        }  
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
