///
///@file     1_comp_2_2.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-19 14:43:1550558620
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int Trip_Min(int x,int y,int z)
{
    return (x<y?x:y)<(x<z?x:z)?(x<y?x:y):(x<z?x:z);

}

int main()
{
 int x,y,z;
 cin >> x >> y >>z;
 cout<<"The Min is :"<<Trip_Min(x,y,z)<<endl;
 return 0;
}
