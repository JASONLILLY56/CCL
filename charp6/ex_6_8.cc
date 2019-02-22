///
///@file     ex_6_8.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-20 12:29:1550636971
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
 
class Location
{   public:
        Location(int xx=0, int yy=0)
        {   
            X=xx;
            Y=yy;
            cout << "Object Constructed." << endl;
        }
        Location(const Location &p);
        ~Location()
        {
            cout << X << "," << Y << "  Object Destroyed." << endl;
        }
        int GetX()const{return X;}
        int GetY()const{return Y;}
    private:
        int X,Y;
};

Location::Location(const Location &p)
{
    X=p.X;
    Y=p.Y;
    cout << "Copy_ocnstructor called." << endl;
}
Location g()
{
    Location A(1,2);
    return A;
}
 
int main()
{
    Location B;
    B = g();
    return 0;
}
