///
///@file     ex_11_18.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 18:09:1551146957
///

#include<fstream>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::ofstream;
using std::ifstream;
using std::cerr;

struct student
{
    int number;
    char name[30];
    int score;
};



 
int main()
{
    student stu;
    int n=0,max,min,total = 0;
    double ave;
    ifstream instuf("Students's.dat",ios::in);
    if(!instuf)
    {
        cerr << "File could not be open." << endl;
        abort();
    }
    do
    {
        instuf.read((char*)&stu,sizeof(stu));
        if(stu.number!=0)
        {
            cout <<stu.number<<'\t'<<stu.name<<'\t'<<stu.score<<endl;
            if(n==0)
                max = min = stu.score;
            else 
            {
                if(stu.score > max) max = stu.score;
                if(stu.score < min) min = stu.score;
            }
            total += stu.score;
            n++;
        }
    }
    while(instuf && stu.number!=0);
    cout << "总人数："<<n<<endl;
    ave = double(total)/n;
    cout << "最高分："<<max<<"\n最低分："<<min <<"\n平均分："<<ave<<endl;
    instuf.close();
    }

 
