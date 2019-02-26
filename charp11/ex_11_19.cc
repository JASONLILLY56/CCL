///
///@file     ex_11_19.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 19:08:1551150512
///
#include "ex_11_19.h"  
using std::cout;
using std::cin;
using std::endl;
 
const char *fileDat = "booksFile.dat";//账目数据文件名

void show_fileDat()
{
    ifstream in_dat_f("booksFile.dat",ios::in);
    if(!in_dat_f)
    {
        cerr<<"File could not be open."<<endl;
        abort();

    }
    bookData book;
    while(in_dat_f){
        in_dat_f.read((char *)&book,sizeof(book));
        cout << book.TP << '\t'<<book.bookName << '\t'<<book.balance<<endl;
    }
}
 
int main()
{
    show_fileDat();
    char choice;
    while(1)
    {
        cout    << "**********书库管理****************\n请输入操作选择\n"
                <<"1：入库\t"<<"2：售出\t"<<"3：查询\t"
                <<"4：建立文本\t"<<"0：初始化\t"<<"Q：退出\n";
        cin >>choice;
        switch(choice)
        {
            case '1':Append(fileDat);   break;
            case '2':Sale(fileDat);     break;
            case '3':Inquire(fileDat);  break;
            case '4':CreateTxt(fileDat);break;
            case '0':Initial(fileDat);  break;
            case 'q':
            case 'Q':cout<<"    退出系统\n";return 0;
            default :cout << "输入错误，请再输入\n";
        }
    }
 
}



