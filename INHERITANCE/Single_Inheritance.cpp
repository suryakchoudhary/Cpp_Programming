#include <iostream>
using namespace std;

class Employee_Details
{
private:
    int eid;
    int doj;

public:
    void set_data();
    void get_data();
};

void Employee_Details :: set_data()
{
    cout<<"Enter your EID = ";
    cin>>eid;

    cout<<"Enter date of joining = ";
    cin>>doj;
}

void Employee_Details :: get_data()
{
    cout<<"EID = "<<eid<<endl;

    cout<<"DOJ = "<<doj<<endl;
}

class Personal_Details : public Employee_Details
{
    private:
    float basic_salary;
    float total_salary;

    public:
    void set_salary();
    void get_salary();
    void all_details();
};

void Personal_Details :: set_salary()
{
    cout<<"Enter basic salary = ";
    cin>>basic_salary;

    cout<<"Enter total salary = ";
    cin>>total_salary;
}

void Personal_Details :: get_salary()
{
    cout<<"Basic Salary = "<<basic_salary<<endl;

    cout<<"Total Salary = "<<total_salary<<endl;
}

void Personal_Details :: all_details()
{
    get_data();
    get_salary();
}

int main()
{
    Personal_Details Alex;

    Alex.set_data();
    Alex.set_salary();

    cout<<"----------------------------------------------------"<<endl;
    Alex.get_data();
    Alex.get_salary();
    cout<<"----------------------------------------------------"<<endl;
    Alex.all_details();
}