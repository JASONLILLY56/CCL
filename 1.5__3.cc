///
///@file     1.5__3.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-17 20:41:1550407316
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
 
int main()
{
    int a=1,b=2;
    bool x,y;
    cout << (a++)+(++b) << endl;
    cout << "a="<<a<<endl;
    cout << "b="<<b<<endl;
    
    cout << "a++="<<a++<<endl;
    cout << "++b="<<++b << endl;

    cout << "a="<<a<<endl;
    cout << "b="<<b<<endl;
    
    cout << a%b << endl;
    
    x = !a>b;//这里逻辑非！的优先级为2而比较符号的优先级为6，数字越低级别越高
    //add parentheses after the '!' to evaluate the comparison first
    //x=!a>b;等价于x=(!a)>b;
    y = a-- && b;
    cout <<"x="<<x<<endl;
    cout <<"y="<<y<<endl;
    
    int c1 = 1,c2=1,d1,d2;

    d1=c1++;
    d2=++c2;
    cout<< "c1="<<c1<<endl;
    cout<< "c2="<<c2<<endl;
    cout<< "d1=c1++="<< d1 << endl;
    cout<< "d2=++c2="<< d2 << endl;

    



    return 0;
   
}
