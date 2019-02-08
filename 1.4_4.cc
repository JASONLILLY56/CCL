///
///@file     1.4_4.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-07 23:43:1549554239
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
 
int main()
{
    int a=10,b;
    int &pa=a,&pb=b;
    cout<<"&pb="<<&pb<<endl;
    cout<<"pb ="<<pb <<endl;
    //cout<<"*pb="<<*pb<<endl;
    cout<<"&pa="<<&pa<<endl;
    cout<<"pa ="<<pa <<endl;
    
    return 0;
}
