#include<bits/stdc++.h>
using namespace std;

class Marks
{
    int intMark;
    int extMark;
    public:
        Marks()
        {
            intMark = 0;
            extMark = 0;
        }
        Marks(int im , int em)
        {
            intMark = im;
            extMark = em;
        }
        void display()
        {
            cout << intMark << endl;
            cout << extMark <<endl;
        }
        Marks operator+(Marks& m)
        {
            Marks temp;
            temp.intMark = intMark + m.intMark;
            temp.extMark = extMark + m.extMark;
            return temp;
        }

        Marks operator-(Marks&);

};

Marks Marks::operator-(Marks& m)
{
            Marks temp;
            temp.intMark = intMark - m.intMark;
            temp.extMark = extMark - m.extMark;
            return temp;
}
// We need to pass 0 or 1 arguments when overloaded function is a member function
// when overloaded function is a friend function, then we need to pass 2 arguments
int main()
{
    Marks m1(10 , 20),m2(30 , 40);
    Marks m3 = m1 + m2;
    Marks m4 = m1 - m2;

    m3.display();
    m4.display();
    return 0;
}