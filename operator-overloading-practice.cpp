#include<bits/stdc++.h>
using namespace std;

class triangle
{
    private:
        int base;
        int height;
    public:
        triangle(){}
        triangle(int b , int h): base(b) , height(h){}

        int area()
        {
            return 0.5*base*height;
        }
        triangle operator+(triangle& t)
        {
            triangle temp;
            temp.base = base + t.base;
            temp.height = height + t.height;
            return temp;
        }

        triangle operator*(triangle& t)
        {
            triangle temp;
            temp.base = base*t.base;
            temp.height = height*t.height;
            return temp;
        }
        triangle operator-(triangle& t)
        {
            triangle temp;
            temp.base = base - t.base;
            temp.height = height - t.height;
            return temp;
        }
        triangle operator+=(triangle& t)
        {
            base += t.base;
            height += t.height;
            return *this;
        }
        triangle operator-=(triangle&);
};

triangle triangle::operator-=(triangle& t)
{
    base -= t.base;
    height -= t.height;
    return *this;
}

int main()
{
    triangle t1(1,2) , t2(1,2);
    // triangle t3 = t1+t2;
    // cout << t1.area() <<endl;
    // cout << t2.area() <<endl;
    // cout << t3.area() <<endl;
    // triangle t4 = t1*t2;
    // cout << t4.area() <<endl;
    t1 += t2;
    cout << t1.area() <<endl;
    t1 -= t2;
    cout << t1.area() <<endl;
}