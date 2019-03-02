///
///@file     11.3_2_2.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-26 08:21:1551198064
///
  
#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::ios; 
 
 
int main()
{
    double x=123.45678;
    cout<<std::setprecision(10)<<x<<endl;//std::setprecision(10)作用于整个函数之中
    //std::setprecision(10)一直作用到下一次改变std::setprecision(10)的值的时候
    cout.width(10);
    cout<<"#";
    cout<<x<<endl;
    cout.precision(5);
    cout << x<<endl;
    cout.setf(ios::showpos);
    cout.precision(6);
    cout<<x<<endl;
    cout.setf(ios::scientific);
    cout.precision(7);//ios::scientific的情况是指小数点后面的精度
    cout << x<<endl;
 
}
