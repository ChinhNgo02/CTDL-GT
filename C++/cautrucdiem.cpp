#include<bits/stdc++.h>

using namespace std;

struct Point{
     double x, y;
};

void input(Point &p){
    cin >> p.x >> p.y;
}

double distance(Point &p, Point &q){
    double can = (q.x-p.x)*(q.x-p.x) + (q.y-p.y)*(q.y-p.y);
    double kq = sqrt(can);
    return kq;
}

int main(){
    struct Point A, B;
    int t;
    cin >> t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}