///
///@file     11.3_2_3.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-26 08:37:1551199068
///
  
#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::setw;
using std::setprecision;
using std::fill;
 
int main()
{
    double x=123.456789;
    //cout<<std::setfill('#');
    cout.fill('#');//作用域和std::setfill('#')是一致的
    cout<<setw(12)<<endl;//这个会空一行但是不会输出#
    //setw(12)作用于每一行中，不是作用于全局
    //都是作用于整个函数
    //cout.width(12);//与setw作用域一样

    cout<<setw(12);//当setw(12)与setfill('#')才能共同使用进行填充
    cout<<setiosflags(ios::fixed|ios::showpos)<<x<<endl;

    cout<<setw(12)<<setiosflags(ios::right);
    cout<<setprecision(3)<<-x<<endl;//设置小数点后面的位数为3
    
    cout.width(12);
    cout.setf(ios::left,ios::right);
    cout<<setiosflags(ios::fixed|ios::left)<<x<<endl;
    //这里加上fixed后也不能直接从right对齐切换成left对齐
    //一定要用setf(ios::left,ios::right);进行切换
    cout<<resetiosflags(ios::fixed|ios::showpos)<<setiosflags(ios::scientific);
    cout<<setprecision(5)<<x<<endl;//设置小数点后面位数为5位
 
}
