///
///@file     ex_8_9.cc
///@author     Jason(13933536151@163.com)
///@data     2019-03-01 16:59:1551488391
///
#include<iomanip>  
#include<iostream>

using namespace std;

#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
 
int main()
{
    Point p(72,115);
    cout << "The initial location of p is: "<< p << endl;
    p.setPoint(10,10);
    cout << "\nThe new location and radius of p is: " << p << endl;
    Circle c(2.5,37,43);
    cout << "\nThe initial loacation and radius of c are\n"<<c<< "\nArea="<<c.area()<<"\n";
    c.setRadius(4.25);
    c.setPoint(2,2);    
    
    cout << "\nThe new location and radius of c are\n"<< c << "\nArea ="<<c.area()<<"\n";

    Cylinder cyl(5.7,2.5,12,23);

    cout << "\nThe initial location, radius and height of cyl are\n"<<cyl
        <<"Area ="<< cyl.area()<<"\nVolume ="<<cyl.volume()<<'\n';

    cyl.setHeight(10);
    cyl.setRadius(4.25);
    cyl.setPoint(2,2);
    cout << "\nThe new location,radius and height of cyl are\n"<<cyl
        <<"Area ="<<cyl.area()<<"\nVolume = "<<cyl.volume()<<"\n";
    return 0;
}
