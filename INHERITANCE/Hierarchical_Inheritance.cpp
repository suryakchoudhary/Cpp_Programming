#include <iostream>
using namespace std;

class University                  //Parent
{
private:
    std::string university_name;
    int university_code;
    std::string university_place;

public:
    void set_u_data();
    void get_u_data();
};

void University ::set_u_data()
{
    cout << "Enter University Name = ";
    cin >> university_name;

    cout << "Enter University Code = ";
    cin >> university_code;

    cout << "Enter University Place = ";
    cin >> university_place;
}

void University ::get_u_data()
{
    cout << "University Name = " << university_name.c_str() << endl;
    cout << "University Code = " << university_code << endl;
    cout << "University Place = " << university_place.c_str() << endl;
}

/*------------------------------------------------------------*/

class College : public University        // Child
{
private:
    std::string clg_name;
    int clg_code;
    std::string clg_place;

public:
    void set_c_data();
    void get_c_data();
};

void College ::set_c_data()
{
    cout << "Enter College Name = ";
    cin >> clg_name;

    cout << "Enter College Code = ";
    cin >> clg_code;

    cout << "Enter College Place = ";
    cin >> clg_place;
}

void College ::get_c_data()
{
    cout << "College Name = " << clg_name.c_str() << endl;
    cout << "College Code = " << clg_code << endl;
    cout << "College Place = " << clg_place.c_str() << endl;
}

/*------------------------------------------------------------*/

class Student : public University       // Child
{
private:
    int roll_no;
    int class_std;
    float age;

public:
    void set_s_data();
    void get_s_data();
};

void Student ::set_s_data()
{
    cout << "Enter Roll Number = ";
    cin >> roll_no;

    cout << "Enter Class Room = ";
    cin >> class_std;

    cout << "Enter Age = ";
    cin >> age;
}

void Student ::get_s_data()
{
    cout << "Student Name = " << roll_no << endl;
    cout << "Student Code = " << class_std << endl;
    cout << "Student Age = " << age << endl;
}

/*------------------------------------------------------------*/

int main()
{
    Student Alex;
    Alex.set_u_data();
    Alex.get_u_data();
    cout<<"****************************************"<<endl;
    College Max;
    Max.set_u_data();
    Max.get_u_data();
}