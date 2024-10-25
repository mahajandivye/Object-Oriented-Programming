#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
        int var_base = 1;
        virtual void display()
        {
            cout << "this is base class variable" << var_base <<endl;
        }
};

class derived1:public base
{
    public:
        int var_derived1 = 2;
        virtual void display()
        {
            cout << "this is derived 1 class variable" << var_derived1 <<endl;
        }
};

class derived2:public base , public derived1
{
    public:
        int var_derived2 = 3;
        void display()
        {
            cout << "this is derived 2 class variable" << var_derived2 <<endl;
        }
};

int main()
{
    derived1* derived1_obj_pointer;
    derived2 derived2_obj;
    derived1_obj_pointer = &derived2_obj;
    derived1_obj_pointer->display();
}