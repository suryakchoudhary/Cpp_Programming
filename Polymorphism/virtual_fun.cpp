#include <iostream>
using namespace std;

class Base_class
{
private:
    int var_base;

public:
    virtual void display()
    {
        cout << endl
             << "BASE CLASS" << endl;
    }
};

class Derived_class : public Base_class
{
private:
    int var_derived;

public:
    void display()
    {
        cout << endl
             << "DERIVED CLASS" << endl;
    }
};

int main()
{
    Base_class obj_base;
    Derived_class obj_derived;
    Base_class * Base_class_ptr;
    Base_class_ptr = &obj_base;    // Irrespective of virtual function, it will always access Base_classes as Base_class_ptr pointing to Base_class.
    Base_class_ptr->display();     

    Base_class_ptr = &obj_derived; // If Base_class display() fun is virtual, Derived_class display() fun will be accessed and vice versa.
    Base_class_ptr->display();
}