///
///@file     ex_6_12.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-21 08:26:1550708806
///
  
#include<iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::strcpy;

struct Date
{
    int year, month,day;
};

class Student
{   public:
        Student(int y, int m, int d, int num=0, const char *pname="no name");
        void PrintStudent()const;
    private:
        const int code;
        char name[20];
        Date birthday;//结构数据成员
};
//______________成员函数定义__________________
void Student::PrintStudent()const
{
    cout<<"Order:"<<code<<"\tName:"<<name<<"\tBirthday:"<<birthday.year<<"-"<<birthday.month<<"-"
        <<birthday.day<<endl;
}

//————————带参数构造函数完成数据成员初始化
Student::Student(int y, int m, int d, int num, const char *pname):code (num)
{
    strcpy(name,pname);
    name[sizeof(name)-1]='\0';
    birthday.year=y;
    birthday.month=m;
    birthday.day=d;
    //code=1000;
}

 
int main()
{
    Student stu1(1996,4,10,1001,"吴玉豪");
    stu1.PrintStudent();
    Student stu2(1996,1,8,1002,"文晓曼");
    stu2.PrintStudent();
    return 0;
 
}
