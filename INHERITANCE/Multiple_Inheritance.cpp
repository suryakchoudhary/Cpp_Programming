#include <iostream>
#include <string.h>
using namespace std;

class School // 1st parent class
{
private:
    int school_code;
    std::string school_name;

public:
    void set_details();
    void get_details();
};

void School ::set_details()
{
    cout << "Enter school code = ";
    cin >> school_code;

    cout << "Enter school name = ";
    cin >> school_name;
}

void School ::get_details()
{
    cout << "School code = " << school_code << endl;

    cout << "School name = " << school_name.c_str() << endl;
}

/*-----------------------------------------------------------------*/

class Subjects // 2nd parent class
{
private:
    float maths;
    float phy;
    float chem;

public:
    void set_marks();
    void get_marks();
};

void Subjects ::set_marks()
{
    cout << "Enter Maths marks = ";
    cin >> maths;

    cout << "Enter Phy. marks = ";
    cin >> phy;

    cout << "Enter Chem. marks = ";
    cin >> chem;
}

void Subjects ::get_marks()
{
    cout << "MATHS = " << maths << endl;

    cout << "PHY = " << phy << endl;

    cout << "CHEM = " << chem << endl;
}
/*---------------------------------------------------------------------*/

class Student : public School, public Subjects // Child class
{
private:
    std::string name;
    int roll_number;

public:
    void set_data();
    void get_data();
    void get_full_details();
};

void Student ::set_data()
{
    cout << "Enter student's name = ";
    cin >> name;

    cout << "Enter roll number = ";
    cin >> roll_number;
}

void Student ::get_data()
{
    cout << "NAME = " << name.c_str() << endl;

    cout << "Roll Number = " << roll_number << endl;
}

void Student ::get_full_details()
{
    get_data();
    get_details();
    get_marks();
}

int main()
{
    Student Alex;

    Alex.set_data();
    Alex.set_details();
    Alex.set_marks();

    cout << endl
         << "-------------------------------------------------" << endl;

    Alex.get_data();
    Alex.get_details();
    Alex.get_marks();

    cout << "------------------------------------------------------" << endl;

    Alex.get_full_details();
}