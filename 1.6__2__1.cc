///
///@file     1.6__2__1.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-18 15:17:1550474225
///
  
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::dec;
using std::oct;
using std::hex;
int main()
{
    int a=123;
    int &ra=a;
    int *pa=&a;
    cout<<setw(6)<<dec<<a
        <<setw(6)<<oct<<ra
        <<setw(6)<<hex<<*pa<<endl;
    return 0;
 
}
