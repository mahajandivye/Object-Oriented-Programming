#include<bits/stdc++.h>
using namespace std;

class baseClass
{
    public:
    int var_base;
    void display()
    {
        cout << "displaying base class variable var_base " << var_base << endl;
    }
};

class derivedClass:public baseClass
{
    public:
    int var_derived;
    void display()
    {
        cout << "dispalying derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    baseClass* base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 34;
     base_class_pointer->display();
     derivedClass* derived_class_pointer;
     derived_class_pointer = &obj_derived;
     derived_class_pointer->var_derived = 98;
     derived_class_pointer->display();
    return 0;
}