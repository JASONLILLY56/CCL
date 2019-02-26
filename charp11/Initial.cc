///
///@file     Initial.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 19:26:1551151581
///
#include "ex_11_19.h"
extern const bookData mark;
void Initial(const char*fileDat)
{
    fstream fdat(fileDat,ios::out|ios::binary);
    cout <<"若账目文件存在，将删除原有数据，要进行文件初始化吗？(Y\\N)\n";
    char answer;
    cin >> answer;
    if(answer == 'Y'||answer=='y')
    {
        fdat.seekp(0,ios::beg);
        fdat.write((char*)&mark,sizeof(bookData));
        cout<<"文件已经初始化。\n";
    }
    else
        cout<<"取消操作\n";
    fdat.close();
}
