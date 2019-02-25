///
///@file     ex_11_12.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-24 23:26:1551079575
///
  
#include<iostream>
#include<fstream>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::ifstream;
using std::cerr;
using std::strcpy;
 
int main()
{
    char name[30],s[80],NameMax[30],NameMin[30];
    int number,score;
    int n=0,max,min,total=0;
    double ave;
    ifstream instuf("test.txt",ios::in);
    instuf.seekg(0,ios::beg);//流指针置在文件头
    if(!instuf)
    {
        cerr<<"File could not be open."<<endl;
        abort();
    }
    instuf.getline(s,80);//略去标题行
    while(instuf>>number>>name>>score)
    {
        cout << number <<'\t'<<name<<'\t'<<score<<endl;
        if(n==0)//初始循环值为0
        {
            strcpy(NameMax,name);
            strcpy(NameMin,name);
            max =min =score;//将最大最小值都设置为第一个人的分数，起到一个哨兵的作用
        }
        else
        {
            if(score > max ) 
            {
                max =score;
                strcpy(NameMax,name);
                //NameMax = name;
            }
            if(score < min )
            {
                min =score;
                strcpy(NameMin,name);
                //NameMin = name;
            }
        }
        total+=score;
        n++;
    }
    ave = double(total)/n;
    cout << "maximal is: "<< max << "\tname is: "<<NameMax
        <<"\nminimal is: "<<min << "\tname is: "<<NameMin
        <<"\naverage is: "<<ave<<'\n';
    instuf.close();
}

