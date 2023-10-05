#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream write;
    string txt_w = "File I/O using member function \n and my name is \n SURYA";
    write.open("data_mem_fun.txt");
    write << txt_w;
    write.close();

    ifstream read;
    string txt_r;
    read.open("data_mem_fun.txt");
    cout<<endl;
    while (read.eof() == 0)
    {
        getline(read, txt_r);
        // read>>txt_r;
        cout << txt_r<<endl;
    }
    cout<<endl;
    read.close();
}
