///
///@file     ex_10_6.cc
///@author     Jason(13933536151@163.com)
///@data     2019-03-02 08:44:1551545067
///
  
#include<iostream>
#include<stdlib.h>
using namespace std;
#include"Array.h"
#include"BoundArray.h"
 
 
int main()
{
    int i;
    int low = 1, height = 10;
    BoundArray<int> b(low, height);
    for (i = low;i<=height;i++)
        b.Enter(i,i*2);
    cout << "BoundArray:\n";
    for (i = low;i<=height;i++)
    {   cout << "b["<<i<<"]="<<b.Entry(i)<<"\t";
        if(i%5==0) cout <<endl;
    }
 
}
