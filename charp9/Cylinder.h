#ifndef CYLINDER_H
#define CYLINDER_H
class Cylinder:public Circle
{
    friend ostream & operator<< (ostream &,const Cylinder &);
public:
    Cylinder(double h = 0.0, double r = 0.0, int x = 0, int y = 0);
    void setHeight( double);
    double getHeight() const;
    double area() const;
    double volume () const;
protected:
    double height;
};

Cylinder::Cylinder(double h,double r,int x,int y):Circle (r,x,y)
{   setHeight(h);}

void Cylinder::setHeight(double h)
{   height = (h>=0?h:0);}

double Cylinder::getHeight() const
{   return height;}

double Cylinder::area() const
{   return 2*Circle::area() +2*3.14159*radius*height;}

double Cylinder::volume()const
{   return Circle::area()*height;}
ostream & operator << (ostream & output,const Cylinder &cy)
{
    output << "Center = "<<'['<<cy.x<<","<<cy.y<<"]"
        <<";Radius =" << setiosflags(ios::fixed|ios::showpoint)
        <<setprecision(2)<<cy.radius<< ";Height =" << cy.height << endl;
    return output;
}//重新定义了输出格式，也即是对流插入运算符进行了重载；
#endif
