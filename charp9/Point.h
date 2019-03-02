#ifndef POINT_H
#define POINT_H
class Point
{
private:
    friend ostream & operator<< (ostream &, const Point &);
public:
    Point(int =0,int = 0);
    void setPoint(int ,int);
    int getX() const
    {   return x;}
    int getY() const
    {   return y;}
protected:
    int x,y;
};

//构造函数，调用成员函数对x,y进行初始化
Point::Point(int a,int b)
{
    setPoint(a,b);
}

void Point::setPoint(int a,int b)
{
    x = a;
    y = b;
}

//重载插入运算符，输出对象数据
ostream & operator << (ostream & output, const Point &p)
{
    output << '['<<p.x<<','<< p.y << ']';
    return output;
}
#endif
