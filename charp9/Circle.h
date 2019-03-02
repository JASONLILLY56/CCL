#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : public Point
{
    friend ostream & operator<<(ostream &,const Circle &);//友元函数
public:
    Circle(double r=0.0,int x = 0, int y = 0);
    void setRadius(double);
    double getRadius() const;
    double area() const;
protected:
    double radius;
};

Circle::Circle(double r, int a ,int b):Point(a,b)
{
    setRadius(r);
}

void Circle::setRadius(double r)
{   radius = (r>=0?r:0);}
double Circle::getRadius() const
{   return radius;}

double Circle::area() const
{   return 3.14159*radius*radius;}

ostream & operator << (ostream & output,const Circle &c)
{
    output<<"Center ="<<'['<<c.x<<','<<c.y<<']'<<";Radius ="
        <<setiosflags(ios::fixed|ios::showpoint)<<setprecision(2)<<c.radius;
    return output;
}
#endif
