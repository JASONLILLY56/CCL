///
///@file     1_comp_2_1.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-19 14:09:1550556566
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

bool PointJudge(double x,double y)
{
   if(x<=2&&x>=-2&&y<=2&&y>=-2)
      return true;
  else return false; 
}
int main()
{
    int x,y;
    cout<<"(";
    cin>>x;
    cout<<"("<<x<<",";
    cin>>y;
    cout<<"("<<x<<","<<y<<")"<<endl;
 //cout <<"输入的点是否在范围内"<<PointJudge(x,y)<<endl;
    if(PointJudge(x,y)) cout<<"输入点("<<x<<","<<y<<")在范围内"<<endl;
    else cout << "输入点("<<x<<","<<y<<")不在范围内"<<endl;
    return 0;
}
