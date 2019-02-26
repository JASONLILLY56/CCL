#ifndef EX11_19_H
#define EX11_19_H
#include <iostream>
#include <fstream>
using namespace std;
struct bookData         //书目结构
{                       
    long TP;//int TP;             //书号
    //string bookName;
    char bookName[40];  //书名
    long balance;       //库存量
};

//全局变量，空标志记录
const bookData mark = {0,"noName",0};

void Initial(const char *fileDat);  //账目文件初始化
void Append(const char *fileDat);   //入库
void Sale(const char *fileDat);     //销售
void Inquire(const char *fileDat);  //查询
void CreateTxt(const char *fileDat);//建立文本文件
int endMark(bookData book);        //判断空标志记录，即判断文件结束

#endif


