#include <bits/stdc++.h>
using namespace std;
struct kh
{
    string ma_khach_hang, ten_khach_hang, gioi_tinh, ngay_sinh, dia_chi;
};
kh khach[1000];
struct mh
{
    string ma_mat_hang, ten_mat_hang, don_vi_tinh;
    int gia_mua, gia_ban;
};
mh mat[1000];
int k1 = 0, k2 = 0;
string ma(int m)
{
    string s = to_string(m);
    while (s.size() < 3)
        s = '0' + s;
    return s;
}

class KhachHang
{
public:
    string ma_khach_hang, ten_khach_hang, gioi_tinh, ngay_sinh, dia_chi;
    // public:
    friend istream &operator>>(istream &is, KhachHang &st)
    {
        scanf("\n");
        getline(is, st.ten_khach_hang);
        is >> st.gioi_tinh >> st.ngay_sinh;
        scanf("\n");
        getline(cin, st.dia_chi);
        khach[k1].dia_chi = st.dia_chi;
        khach[k1].gioi_tinh = st.gioi_tinh;
        khach[k1].ma_khach_hang = "KH" + ma(k1 + 1);
        khach[k1].ngay_sinh = st.ngay_sinh;
        khach[k1].ten_khach_hang = st.ten_khach_hang;
        k1++;
        return is;
    }
    friend class HoaDon;
};
class MatHang
{
public:
    string ma_mat_hang, ten_mat_hang, don_vi_tinh;
    int gia_mua, gia_ban;
    friend istream &operator>>(istream &is, MatHang &st)
    {
        scanf("\n");
        getline(cin, st.ten_mat_hang);
        cin >> st.don_vi_tinh >> st.gia_mua >> st.gia_ban;
        mat[k2].don_vi_tinh = st.don_vi_tinh;
        mat[k2].gia_ban = st.gia_ban;
        mat[k2].gia_mua = st.gia_mua;
        mat[k2].ma_mat_hang = "MH" + ma(k2 + 1);
        mat[k2].ten_mat_hang = st.ten_mat_hang;
        k2++;
        return is;
    }
    friend class HoaDon;
};
int hd = 1;
class HoaDon
{
public:
    string makh, mamh, mahd;
    int so_luong, loi_nhuan;
    KhachHang d[10];
    friend istream &operator>>(istream &is, HoaDon &st)
    {
        cin >> st.makh >> st.mamh >> st.so_luong;
        st.mahd = "HD" + ma(hd++);
        return is;
    }
    friend void sapxep(HoaDon dshd[], int K)
    {
        for (int i = 0; i < K; i++)
        {
            for (int j = 0; j < k2; j++)
            {
                if (dshd[i].mamh == mat[j].ma_mat_hang)
                {
                    dshd[i].loi_nhuan = dshd[i].so_luong * (mat[j].gia_ban - mat[j].gia_mua);
                }
            }
        }
        for (int i = 0; i < K; i++)
        {
            for (int j = i + 1; j < K; j++)
            {
                if (dshd[i].loi_nhuan < dshd[j].loi_nhuan)
                    swap(dshd[i], dshd[j]);
                else if (dshd[i].loi_nhuan == dshd[j].loi_nhuan && dshd[i].mamh > dshd[j].mamh)
                    swap(dshd[i], dshd[j]);
            }
        }
    }

    friend ostream &operator<<(ostream &os, HoaDon const st)
    {

        cout << st.mahd << " ";
        for (int i = 0; i < k1; i++)
        {
            if (st.makh == khach[i].ma_khach_hang)
            {
                cout << khach[i].ten_khach_hang << " " << khach[i].dia_chi << " ";
            }
        }
        for (int i = 0; i < k2; i++)
        {
            if (st.mamh == mat[i].ma_mat_hang)
            {
                cout << mat[i].ten_mat_hang << " " << st.so_luong << " " << st.so_luong * mat[i].gia_ban << " " << st.loi_nhuan << endl;
            }
        }
        return os << endl;
    }
};

int main()
{
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> dskh[i];
    cin >> M;
    for (i = 0; i < M; i++)
        cin >> dsmh[i];
    cin >> K;
    for (i = 0; i < K; i++)
        cin >> dshd[i];
    sapxep(dshd, K);
    for (i = 0; i < K; i++)
        cout << dshd[i];
    return 0;
}

// Nguyen Van Nam
// Nam
// 12/12/1997
// Mo Lao-Ha Dong-Ha Noi
// Tran Van Binh
// Nam
// 11/14/1995
// Phung Khoang-Nam Tu Liem-Ha Noi
// 2
// Ao phong tre em
// Cai
// 25000
// 41000
// Ao khoac nam
// Cai
// 240000
// 515000
// 4
// KH001 MH001 2
// KH001 MH002 3
// KH002 MH002 4
// KH002 MH001 1