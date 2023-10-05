/* Polymorphism: The same entity(functions or objects) behave differently in different scenarios.
   Example: "+" operator when used in number, it adds the number.
            "+" when used in string, it performs concatenation.
*/

#include <iostream>
using namespace std;

class Base_class
{
private:
    int base_var;

public:
    void display()
    {
        cout << endl
             << "Base Class" << endl;
    }

    void seek_base()
    {
        cout << endl
             << "Seek Base Class" << endl;
    }
};

class Derived_class : public Base_class
{
private:
    int derived_var;

public:
    void display()
    {
        cout << endl
             << "Derived Class" << endl;
    }

    void seek_base()
    {
        cout << endl
             << "Seek Derived Class" << endl;
    }
};

int main()
{
    Base_class *Base_class_ptr;
    Base_class Base_obj;
    Derived_class Derived_obj;
    Base_class_ptr = &Base_obj; // Pointer will always point to the same class elements to which pointer belongs
    Base_class_ptr->display();
    Base_class_ptr = &Derived_obj; // Pointing base class ptr to derived class
    Base_class_ptr->display();
    // Base_class_ptr->Seek();        // Cannot access the Derived_class elements form the Base_class_ptr:error

    Derived_class *Derived_class_ptr;
    Derived_class_ptr = &Derived_obj;
    Derived_class_ptr->display();
    // Derived_class_ptr = &Base_obj;     // Cannot point Derived_class_ptr to Base_class
    Derived_class_ptr->seek_base();
}