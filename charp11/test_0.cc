///
///@file     test_0.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 16:48:1551142080
///
#include<fstream>  
#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::fstream; 
using std::ios; 
using std::hex;
using std::oct;
using std::setw;
using std::setfill;
int main()
{
    fstream f;
    f.open("test_0.txt",ios::out);
    //建立了一个文件，写方式打开文件
    cout << setw(3)<<25<<oct<<25<<hex<<endl;
    cout<< setfill('*')<<setw(10)<<"Hello!"<<endl;
    cout.fill('*');
    cout.width(10);
    cout<<setiosflags(ios::left)<<123.45<<endl;
    return 0;
 
}
