#include<bits/stdc++.h>
using namespace std;

class Marks
{
    int marks;
    public:
        Marks()
        {
            marks = 0;
        }
        Marks(int a)
        {
            marks = a;
        }
        void display()
        {
            cout << "your mark is :" << marks << endl;
        }

        void operator+=(int bonusMark)
        {
            marks += bonusMark;
        }

        friend void operator-=(Marks&,int);
};

void operator-=(Marks& m , int redMark)
{
    m.marks -= redMark;
}

int main()
{
    Marks anilsMark(45);
    anilsMark.display();
    anilsMark += 20;
    anilsMark.display();
    anilsMark -= 20;
    anilsMark.display();
}