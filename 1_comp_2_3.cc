///
///@file     1_comp_2_3.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-19 15:30:1550561459
///
#include <cmath>
#include <iomanip> 
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setfill;
void Apart(int x)
{
    int Digt[5];
    for (int i=0;i<5;i++)
    {
        Digt[4-i]=x/pow(10,4-i);
        cout << "sizeof_pow(10,4-i)="<<sizeof(pow(10,4-i))<<endl;
        cout << "sizeof_int="<<sizeof(Digt[4-i])<<endl;

        x=x%(int)(pow(10,4-i));
        //x=x-Digt[4-i]*pow(10,4-i);
        //cout<<Digt[i]<<"  ";
        //cout<<Digt[i]<<setfill(' ')<<setw(3);
    }
    
    for (int i=0;i<5;i++)
    {
        cout<<Digt[i]<<"  ";
    }
    cout<<7%9<<endl;
}
//void Print()
 
    
int main()
{
    cout<< "请输入一个五位数"<<endl;
    int x;
    cin >> x;
    Apart(x);
    return 0;
}
