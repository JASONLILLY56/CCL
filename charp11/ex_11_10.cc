///
///@file     ex_11_10.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-24 21:53:1551074035
///
  
#include<iostream>
#include <sstream>
using std::cout;
using std::cin;
using std::endl;
using std::ostringstream; 
 
 
int main()
{
    ostringstream Output;
    double x,y;
    cout << "Input x:";
    cin >>x;
    cout << "Input y:";
    cin >>y;
    Output<<x<<"*"<<y<<"="<<x*y<<endl;//插入数据项
    cout << Output.str();//输出匿名对象
}
