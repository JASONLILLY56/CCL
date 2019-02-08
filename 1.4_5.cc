///
///@file     1.4_5.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-07 23:55:1549554908
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
 
int main()
{
     int a=5,b=3,t;
     int &ra=a;
     int &rb=b;
     t=ra;
     ra=rb;
     rb=t;
    cout<<"ra="<<ra<<endl;
    cout<<"rb="<<rb<<endl;
}
