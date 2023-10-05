#include <iostream>
using namespace std;

class Employee
{
private:
    int roll_num;
    int Class;
    float marks;

public:
    // void set_data(int, int, float);
    void set_data();
    void get_data(void);
};

// void Employee ::set_data(int R, int C, float M)
// {
//     roll_num = R;
//     Class = C;
//     marks = M;
// }

void Employee ::set_data()
{
    cout<<"Enter the roll number = ";
    cin>>roll_num;
    
    cout<<"Enter class room = ";
    cin>>Class;

    cout<<"Enter marks obtained = ";
    cin>>marks;

    cout<<endl<<endl;
}

void Employee ::get_data()
{
    cout << "Roll Number = " << roll_num << endl;
    cout << "Class = " << Class << endl;
    cout << "Marks = " << marks << endl<<endl;
}

int main()
{
    Employee Alex, Romit;
    // Alex.set_data(33, 6, 88);
    Alex.set_data();
    Alex.get_data();

    Romit.set_data();
    Romit.get_data();
}