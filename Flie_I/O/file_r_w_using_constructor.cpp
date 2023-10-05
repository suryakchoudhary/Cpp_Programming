#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    string st = "Writing in file ...................By Surya Kant";
    ofstream write("/home/user/Cpp_prog/Flie_I/O/data.txt");
    cout<<"Enter your name";
    cin>>st;
    write<<"My name is: "+st;
    write.close();

    string st2;
    ifstream read("/home/user/Cpp_prog/Flie_I/O/data.txt");
    // read>>st2;
    getline(read, st2);
    cout<<st2<<endl;
    read.close();
}