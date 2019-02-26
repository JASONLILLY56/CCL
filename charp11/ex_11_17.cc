///
///@file     ex_11_17.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 16:53:1551142380
///
#include<fstream>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::cerr;
using std::ofstream;
using std::ifstream;
//建立结构体student，记录的实现
struct student
{
    int number;
    char name[30];
    int score;
};
//定一个空记录
const student mark={0, "noName\0",0};

int main()
{
    char s[80];
    student stu;
//ifstream为读文件，这里读是指从文件中读到instuf流中来
//ofstream为写文件，这里是指从outf流中写入Student's.dat中。
    ifstream instuf("Students's.txt",ios::in);//读文本文件
    ofstream outf("Students's.dat",ios::out|ios::binary);//写二进制文件
    //文本文件流instuf
    //二进制数据文件流outf
    //写二进制数据
    if(!instuf|!outf)
    {
        cerr << "File could not be open."<<endl;
        abort();
    }

    instuf.getline(s,80);//略去标题行

    //从文本文件提取数据，并测试
    while(instuf>>stu.number>>stu.name>>stu.score)
    {
        cout << stu.number<<'\t'<<stu.name<<'\t'<<stu.score<<endl;//显示
        //把当前行的文本转换成student类型数据，写入内存变量stu中
        outf.write((char*)&stu,sizeof(student));
        //把变量stu的值直接以二进制代码的形式写到outf连接的文件Student's.dat中
    }
    outf.write((char*)&mark,sizeof(student));
    instuf.close();
    outf.close();
 
}
