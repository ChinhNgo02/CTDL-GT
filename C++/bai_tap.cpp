#include <bits/stdc++.h>

using namespace std;

class Nguoi
{
protected:
	int tuoi;
	string hoten;
};
class HocSinh : public Nguoi
{
private:
	string masv;
	string lop;
	float diem;

public:
	void nhap()
	{
		scanf("\n");
		getline(cin, hoten);
		cin >> tuoi;
		cin >> masv;
		cin >> lop;
		cin >> diem;
	}
	void xuat()
	{
		cout << masv << " " << hoten << " " << lop << " " << tuoi << " " << fixed << setprecision(2) << diem << endl;
	}
	float getDiem()
	{
		return diem;
	}
};

class GiangVien : public Nguoi
{
private:
	string khoa;
	string ma;

public:
	void nhap()
	{
		scanf("\n");
		getline(cin, hoten);
		cin >> tuoi;
		cin >> ma;
		cin >> khoa;
	}
	void xuat()
	{
		cout << ma << " " << hoten << endl;
	}
	string getKhoa()
	{
		return khoa;
	}
};

int main()
{
	int n;
	cin >> n;
	HocSinh a[n];
	for (int i = 0; i < n; i++)
	{
		a[i].nhap();
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i].getDiem() >= 8)
			a[i].xuat();
	}
	cin >> n;
	GiangVien b[n];
	for (int i = 0; i < n; i++)
	{
		b[i].nhap();
	}
	for (int i = 0; i < n; i++)
	{
		if (b[i].getKhoa() == "CNTT")
			b[i].xuat();
	}
	return 0;
}