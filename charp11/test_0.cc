///
///@file     test_0.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 16:48:1551142080
///
#include<fstream>  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fstream; 
using std::ios; 
 
int main()
{
    fstream f;
    f.open("test_0.txt",ios::out);
    //建立了一个文件，写方式打开文件
    return 0;
 
}
