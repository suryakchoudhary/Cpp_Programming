#include <iostream>
using namespace std;

template <class T1, class T2>
float avgfun(T1 A, T2 B)
{
    float avg = (A + B) / 2.0;
    return avg;
}

int main()
{
    float val = avgfun(3.3, 7);
    cout << "AVERAGE = " << val << endl;
    return 0;
}