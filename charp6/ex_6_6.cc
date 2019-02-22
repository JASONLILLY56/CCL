///
///@file     ex_6_6.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-20 10:13:1550628791
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
 
class Location
{   public:
        Location()
        {cout<<"Object Initialized:"<< endl;}
        ~Location()
        {cout<<"Object Destroyed:" << endl;}
        Location(int xx=0,int yy=0)
        {X=xx;Y=yy;cout << "Object Initailized:"<< endl;}
        Location(const Location &p);
        int GetX()const {return X;}
        int GetY()const {return Y;}
    private:
        int X,Y;
};

Location::Location(const Location &p)
{
    X =p.X;
    Y =p.Y;
    cout << "Copy_constructor called." << endl;
}

int main()
{
    Location A(1,2);
    Location B(A);
    cout << "A:"<< A.GetX()<<","<<A.GetY()<<endl;
    cout << "B:"<< B.GetX()<<","<<B.GetY()<<endl;
    return 0;
 
}
