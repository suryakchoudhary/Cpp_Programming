#include <iostream>
using namespace std;

template <class Q>  // Any letter can be inserted T or Q etc
class sum
{
public:
    Q a, b;
    sum(Q x, Q y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "Sum = " << (a + b) << endl;
    }
};

// sum::sum(int x, int y)
// {
//     a = x;
//     b = y;
// }

// void sum::display()
// {
//     cout << "Sum = " << (a + b) << endl;
// }

int main()
{
    sum<int> o(7, 3); // Implicit call in constructor with arg. "sum<int>o(3,5)"    // sum e = sum(5, 44); // Explicit call
    o.display();
    sum<float> f(4.1, 7);
    f.display();
    return 0;
}