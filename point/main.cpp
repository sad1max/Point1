#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
        double x;
        double y;
        void PrintPoint(){
        cout << x << " " << y << endl;
        }

        friend const Point operator+ (const Point& left,const Point& right);

        friend const Point operator* (const Point& left,const double& right);

        Point& operator= (const Point& right){
            x = right.x;
            y = right.y;
            return *this;
        }

        void SetPoint(double _x, double _y){
            x = _x;
            y = _y;
        }
        Point EquallyPoints(Point B){
            x = B.x;
            y = B.y;
        return B;
        }
        double RadiusVector(){
            return sqrt(x*x+y*y);
        }
        double Distance(Point A){
            return sqrt((x-A.x)*(x-A.x)+(y-A.y)*(y-A.y));
        }
};

const Point operator+(const Point& left, const Point& right) {
    Point A;
    A.SetPoint(left.x+right.x, left.y+right.y);
    return A;
}

const Point operator*(const Point& left, const double& right) {
    Point A;
    A.SetPoint(left.x*right, left.y*right);
    return A;
}

class Triangle{
public:
        Point A, B, C;
        void SetTriangle(Point _A, Point _B, Point _C){
            A = _A;
            B = _B;
            C = _C;
        }
        void MidTriangle(){
            Point M1;
            M1 = (A + B )*0.5;
            M1.PrintPoint();
        }
};

int main() {
        Point A, B, C;
        Triangle G;
        A.SetPoint(1, 1);
        B.SetPoint(0, 0);
        C.SetPoint(1, 0);
        G.SetTriangle(A, B, C);
        G.MidTriangle();
        return 0;
}
