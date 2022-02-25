#include <bits/stdc++.h>
using namespace std;

struct PhanSo
{
    long long tu, mau;
};

void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p)
{
    long long UC = __gcd(p.tu, p.mau);
    p.tu /= UC;
    p.mau /= UC;
}

struct PhanSo tong(PhanSo &p, PhanSo &q)
{
    rutgon(p);
    rutgon(q);
    long long BC = __gcd(p.mau, q.mau);
    struct PhanSo sum;
    sum.mau = (p.mau*q.mau) / BC;
    sum.tu = (p.tu*q.mau+q.tu*p.mau)/BC;
    return sum;
}

void in(PhanSo &p)
{
    cout << p.tu << "/" << p.mau;
}

int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}