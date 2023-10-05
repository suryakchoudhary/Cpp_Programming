#include <iostream>
using namespace std;

template <class T>
class Add
{
public:
    T A, B, add;

    Add(T x, T y)
    {
        A = x;
        B = y;
        add = A + B;
    }

    void display();
};

// Definition can be done outside class using templates
template <class T>
void Add<T>::display()
{
    cout << "Answer = " << add << endl;
}

int main()
{
    Add<float> obj_1(3.2, 7);
    obj_1.display();

    Add<int> obj_2(4.3, 7.2);
    obj_2.display();
    return 0;
}