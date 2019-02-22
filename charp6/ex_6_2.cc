///
///@file     ex_6_2.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-20 00:52:1550595178
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Tclass
{
    public:
        int x,y;
        void print();
//        {
  //          cout << x << ","<<y << endl;
    //    };
};


void Tclass::print()
{
    cout<<this->y<<","<<this->x<<endl;
}

int add(Tclass *ptf)
{
    return(ptf->x+ptf->y);
};;;;;;
int main()
{
    Tclass test,*pt=&test;
    pt->x=100;
    pt->y=200;
    pt->print();
    test.x=150;
    test.y=450;
    test.print();
    cout << "x+y="<< add(&test) <<endl;
 
}
