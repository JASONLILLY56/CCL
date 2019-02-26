///
///@file     11.3_2_1.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-26 02:35:1551177325
///
  
#include<iostream>
#include<iomanip>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
 
 
 
int main()
{
    double x =123.456;
    cout.width(10);
    cout.setf(ios::dec,ios::basefield);
    //cout.width(10);
    cout<<setfill('*');
    cout << x <<endl;//1
    
    //cout.setf(ios::right);
    cout.setf(ios::right);
    cout.width(15);
    cout << x <<endl;//2
    
    cout.width(20);
    //cout.setf(ios::dec,ios::basefield);
    cout.setf(ios::left,ios::right);
    //cout.width(15);
    cout.setf(ios::left);
    //cout.setf(ios::right,ios::left);
    cout << x <<endl;//3
    
    cout.width(20);
    cout<< setfill('*');
    cout.setf(ios::right);
    cout.setf(ios::showpos);
    cout<<x<<endl;//7
    
    //cout.setf(ios::dec,ios::basefield);
    cout.width(20);
    cout<< setfill('*');
    cout.setf(ios::left,ios::right);//每次要从右对齐转换为左对齐的时候需要将
    //使用上面这条语句，并且第一次转换的时候需要重新设置标志位，否则还是有输出
    //但是第二次就不需要了
    //cout.setf(ios::left);
    cout<<-x<<endl;//8
    cout.setf(ios::scientific);
    cout.width(20);
    cout<< setfill('*');
    cout<<x<<endl;//9:25

 
}
