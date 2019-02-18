///
///@file     1_comp_1_2.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-18 16:50:1550479830
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
void test0()
{
    int a,b,c;
    cout<<"a,b,c="<<endl;
    cin >> a >> b >> c;
    int *pa=&a,*pb=&b,*pc=&c;
    cout <<"a="<<a<<"\tb="<<b<<"\tc="<<c<<endl;
    cout <<"*pa="<<*pa<<"\t*pb="<<*pb<<"\t*pc="<<*pc<<endl;
    cout <<"pa="<< pa<<"\tpb="<<pb<<"\tpc="<<pc<<endl;
}
int main()
{
    test0();
    return 0;
 
}
