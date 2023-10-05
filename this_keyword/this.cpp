#include <iostream>
using namespace std;

class Class
{
    private:
    int code;
    float decimal;

    public:
    void set_data(int code, float decimal)
    {
        this->code = code;          // "this" points to the current class object. Otherwise, local code will always be on high priority.
        this->decimal = decimal;
    }

    void get_data()
    {
        cout<<"Testing for \"this\" keyword to point to instance vatiable code and decimal in class declaration"<<endl<<endl;
        cout<<"CODE = "<<code<<endl<<"DECIMAL = "<<decimal<<endl;
    }
};

int main()
{
    Class C;
    C.set_data(12, 5.5);
    C.get_data();
}