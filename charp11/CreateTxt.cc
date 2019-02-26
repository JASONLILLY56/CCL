///
///@file     CreateTxt.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 21:46:1551159963
///
  
#include"ex_11_19.h"
const char *fileTxt ="booksFile.txt";
void CreateTxt(const char * fileDat)
{
    fstream fdat(fileDat,ios::in|ios::binary);//以读方式打开二进制数据文件
    fstream ftxt(fileTxt,ios::out);
    fdat.seekp(0,ios::beg);
    bookData book;
    cout<<"**************建立文本文件*****************\n";
    do 
    {
        fdat.read((char*)&book,sizeof(bookData));
        if(!endMark(book))
            ftxt<<book.TP<<'\t'<<book.bookName<<'\t'<<book.balance<<'\n';
    }while (!endMark(book));
    ftxt.close();
    cout << "文本文件已经建立，要浏览文件吗？(Y/N)\n";
    char answer, s[80];
    cin >> answer;
    if(answer =='Y'||answer =='y')
    {
        ftxt.open("booksFile.txt",ios::in);
        while(!ftxt.eof())
        {
            ftxt.getline(s,80);
            cout << s<<endl;
        }
        ftxt.close();
    }
    fdat.close();

} 
