///
///@file     1.5__2.2_8.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-17 20:31:1550406660
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
void Year_Judge(int year)
{
    if(((year%4==0)&&(year%100!=0))||(year)%400==0)
        cout<<year<<"是闰年"<<endl;
    else cout << year<<"不是闰年"<<endl;
} 
int main()
{
    Year_Judge(2000);
    Year_Judge(1000);
    return 0;
}
