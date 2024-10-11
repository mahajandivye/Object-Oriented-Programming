#include<bits/stdc++.h>
using namespace std;

class baseClass
{
    public:
    int var_base = 1;
    virtual void display()
    {
        cout << "displaying base class variable var_base " << var_base << endl;
    }
};
// using virtual keyword, we can override the default behaviour
class derivedClass:public baseClass
{
    public:
    int var_derived = 2;
    void display()
    {
        cout << "dispalying derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    baseClass *base_class_pointer = new derivedClass;
    base_class_pointer->display();
}