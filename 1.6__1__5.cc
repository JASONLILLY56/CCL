///
///@file     1.6__1__5.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-18 14:15:1550470523
///
  
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
using std::cout;
using std::cin;
using std::endl;
void test0()
{
    int x=3143418;
    cout << "x="<<std::setw(8)<< x <<endl;
    //输出的结果至少长度为8位
    cout << std::oct <<"x(oct)="<< x <<std::dec<<endl;
    cout << "x(precision)="<<std::setprecision(5)<<x<<endl;
    //管理浮点数的精度
    cout << "3.1415926384729(defualt)="<<3.1415926384729<<endl;
    cout << "3.1415926384729="<<std::setprecision(10)<<3.1415926384729<<endl;
    cout << "3.1415926384729(std--default)="<<3.1415926384729<<endl;
    //在前面声明了std::setprecision(10)为10后其京精度位数就默认为10位了
    cout << "3.1415926384729(std--default--not-enough)="<<3.14159<<endl;
    //不会对为达到精度的位数补0
    cout << "x(setfill)="<<std::setfill('0')<<std::setw(20)<<x<<endl;

}
int main()
{
test0(); 
return 0;
}
