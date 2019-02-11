///
///@file     1.5_4.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-09 13:37:1549690665
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int test0()
{
    int i=1,j=2;
    cout << "i+++j="<<i+++j<<endl;
    cout << "i+j++="<<i+j++<<endl;
    return i+++j;
}

int test1()
{
    int i=1,j=2;
    cout<<"++i+j=" << ++i+j<<endl;
    return ++i+j;
}

void test2()
{
    int i=1,j=2;
    cout<<"i="<< i<< endl;
    cout<<"j="<< j<< endl;
    i++;
    ++j;
    cout<<"i="<< i<< endl;
    cout<<"j="<< j<< endl;
    cout<<"i++="<< i++<<endl;
    cout<<"++j="<< ++j<<endl;
}
int main()
{
    test0();
    test1();
    test2();
    return 0; 
}
