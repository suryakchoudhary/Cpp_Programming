#include <iostream>
using namespace std;

template <class T1, class T2>
class multemp
{
public:
    T1 A;
    T2 B;
    multemp(T1 x, T2 y)
    {
        A = x;
        B = y;
    }

    void display()
    {
        cout << A << endl
             << B << endl;
    }
};

int main()
{
    multemp<char, float> obj('c', 7.3);
    obj.display();
}