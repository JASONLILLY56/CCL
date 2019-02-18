///
///@file     1.6__1__3.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-18 11:09:1550459395
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//using std::hex; 
using std::dec;
//1.6__1__4
 void test0()
{
    int a=101,b=2;
    cout << (a>b?a:b)<<endl;
    cout << "std::hex插入之前a="<<a<<endl;
    cout << std::hex<<"in Hex  a+b="<<a+b<<endl;
    cout <<"&a="<< &a <<"\n"<<"std::hex插入之后a="<< a << endl;
    //在使用std::hex之后的数据都以hex格式输出。
    //在使用std::hex之前的数据不受影响。
}

void test1()
{
    int a = 17,b=2;
    cout<<&a<<endl<<a<<endl;
}
int main()
{
    double x,y;
    cin >> x>>y;
cout <<"x="<<x<<"\n"
        <<"y="<<y<<endl;
    test0();
    test1();
    return 0;
 
}
