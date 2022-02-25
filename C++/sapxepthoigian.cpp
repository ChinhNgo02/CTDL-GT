#include<bits/stdc++.h>

using namespace std;

typedef struct thoigian {
    long long a, b, c;
}tg;

void nhap(tg sv[], int n){
    int m = n;
    int i = 0;
    while(m--){
        cin >> sv[i].a >> sv[i].b >> sv[i].c;
        i++;
    }
}

void sx(tg sv[], int n){
    for(int i = 0; i < n-1;i++){
        for(int j = i+1; j < n;j++){
            if(sv[i].a > sv[j].a) swap(sv[i],sv[j]);
            else if(sv[i].a == sv[j].a && sv[i].b > sv[j].b) swap(sv[i],sv[j]);
            else if(sv[i].a == sv[j].a && sv[i].b == sv[j].b && sv[i].c > sv[j].c) swap(sv[i],sv[j]);
        }
    }
    for(int i = 0; i < n;i++){
        cout << sv[i].a << " " << sv[i].b << " " << sv[i].c <<endl;
    }
}

int main(){
    tg sv[5001];
    int n;
    cin >> n;
    nhap(sv, n);
    sx(sv, n);
}