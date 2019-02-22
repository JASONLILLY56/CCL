///
///@file     ex_6_19.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-23 00:10:1550851842
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
 
class A
{   friend class B;
    public://这里其实可以不用public，函数编译也通过，因为B是A对友元
        void Display()
        {
            cout << x << endl;
        }
    private:
        int x;
};

class B
{
    public:
        void Set(A &Aobject, int i) {   Aobject.x = i;}
        void Display(A &Aobject)    {   Aobject.Display();}
};
 
int main()
{
    B Bobject;
    A Aobject;
    Bobject.Set(Aobject,100);//利用B类的函数成员，对A类对象的私有成员进行了初始化
    Bobject.Display(Aobject);//直接使用A类中的成员函数
    return 0;
 
}
