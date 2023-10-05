#include <iostream>
using namespace std;

template <class T1 = int, class T2 = int, class T3 = int>
class deftemp
{
public:
    T1 A;
    T2 B;
    T3 C;

    deftemp(T1 x, T2 y, T3 z)
    {
        A = x;
        B = y;
        C = z;
    }

    void display()
    {
        cout << endl
             << A << endl
             << B << endl
             << C << endl;
    }
};

int main()
{
    deftemp<> obj_1(1, 3, 5.3); // Taking default datatype when not specified
    obj_1.display();

    deftemp<int, float, char> obj_2(3, 4.6, 'S'); // Taking specified datatype by user
    obj_2.display();
}