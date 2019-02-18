///
///@file     1.6__2__2.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-18 15:28:1550474911
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int Squ_Com(int a)
{
    int squ=a*a;
    return squ;
}

int Cub_Com(int a)
{
    int cub=a*a*a;
    return cub;
}

int main()
{
    for(int i=0;i<11;i++)
    {
        cout<<i<<"\tSquare="<<Squ_Com(i)<<"\tCube="<<Cub_Com(i)<<"\n"<<endl;
    }
    return 0;

 
}
