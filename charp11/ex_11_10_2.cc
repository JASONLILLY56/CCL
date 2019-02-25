///
///@file     ex_11_11.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-24 22:18:1551075527
///
  
#include<iostream>
#include <strstream>
using std::cout;
using std::cin;
using std::endl;
using std::ostrstream; 
 
 
int main()
{
    char buf[80];
    ostrstream Output(buf,sizeof(buf));
    double x,y;
    cout << "Input x:";
    cin >> x;
    cout << "Input y:";
    cin >> y;
    Output<<x<<"*"<<y<<"="<<x*y<<'\0';
    cout << buf << endl;
 
}
