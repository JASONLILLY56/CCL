///
///@file     ex_11_8.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-24 20:22:1551068531
///
#include<iomanip> 
#include<iostream>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::setprecision; 
int main()
{

   double x = 22.0/7;
  int i;
    cout << "outpu in fixed:\n";
    cout <<setiosflags(ios::fixed|ios::showpos);
   for(i=1;i<=5;i++)
      cout << setprecision(i)<<x<<endl;

  cout << "output in scientific:\n";
  cout << resetiosflags(ios::fixed|ios::showpos)
       << setiosflags(ios::scientific);
 for(i=1;i<=5;i++)
    cout << setprecision(i)<<x*1e5<<endl;

}
