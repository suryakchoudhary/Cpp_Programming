#include <iostream>
using namespace std;

class Student
{
private:
    int sub_code;
    float marks;

public:
    void set_data(int n, float m)
    {
        sub_code = n;
        marks = m;
    }

    void get_data()
    {
        cout<<"***********************************"<<endl;
        cout<<endl<<"SUBJECT CODE = "<<sub_code<<endl;
        cout<<"MARKS = "<<marks<<endl;
        cout<<"***********************************"<<endl<<endl;
    }
};

int main()
{
    int size = 3;
    Student *ptr = new Student[size];   // The new operator does both the allocation and the initialization, where as the operator new only does the allocation.
    Student *temp_ptr = ptr;
    int i, Code;
    float Marks;
    for(i = 0; i < size; i++)
    {
        cout<<"Enter Code: Student_"<<i+1<<" = ";
        cin>>Code;

        cout<<"Enter Marks Student_"<<i+1<<" = ";
        cin>>Marks;

        ptr->set_data(Code, Marks);    // (*ptr).set_data();
        ptr++;
    }

    for(i = 0; i < size; i++)
    {
        temp_ptr->get_data();   // (*temp_ptr).get_data();
        temp_ptr++;
    }
}