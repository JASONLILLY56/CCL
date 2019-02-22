///
///@file     ex_6_3.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-20 08:25:1550622342
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Date
{   public:
        Date();
        ~Date();
        void SetDate(int y,int m,int d);
        int isLeapYear()const;
        void PrintDate()const;
    private:
        int year,month,day;
};

Date::Date()
{
    cout << "Date object initialized.\n";
}

Date::~Date()
{
    cout << "Date object destroyed.\n";
}

void Date::SetDate(int y,int m,int d)
{
    year = y;
    month = m;
    day = d;
}

int Date::isLeapYear()const
{
    return (year%4==0&&year%100!=0)||(year%400==0);
}

void Date::PrintDate()const
{
    cout << year <<"/"<< month <<"/"<< day ;
}
int main()
{
    Date d;
    int year ,month ,day;
    cout << "请输入年月日"<<endl;
    cin >> year >> month >> day;
    d.SetDate(year,month,day);
    //d.SetDate(2012,5,1);
    //d.PrintDate();
    if(d.isLeapYear())  {d.PrintDate();cout << " is leap year." << endl;}
    else {d.PrintDate();cout << " is not leap year" << endl;}
    return 0;
}
