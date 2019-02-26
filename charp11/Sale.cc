///
///@file     Sale.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 21:09:1551157762
///
  
#include "ex_11_19.h"
void Sale(const char* fileDat)
{
    char choice;
    bookData book;
    long key;//int key;
    long num;
    fstream fdat(fileDat,ios::in|ios::out|ios::binary);
    //以读/写方式打开文件
    cout<<"******************销售登记******************\n";
    while(1)
    {
        cout << "请输入操作选择\n"
            <<"1：销售登记\t"<<"Q：退出\n";
        cin >> choice;
        switch(choice)
        {
            case '1':
                {
                    fdat.seekg(0,ios::beg);
                    cout <<"书号(TP)：\n";
                    cin >> key;
                    do
                    {
                        //读一个记录
                        fdat.read((char *)&book,sizeof(bookData));
                    }
                    while(book.TP!=key&&!endMark(book));
                    if(book.TP==key)
                    {
                        cout << book.TP<<'\t'<<book.bookName<<'\t'<<book.balance<<'\n';
                        cout << "销售数量：\n";
                        cin >> num;
                        if(num > 0&& book.balance>=num)
                            book.balance-=num;//修改库存量
                        else
                        {
                            cout << "数量输入错误\n";
                            continue;
                        }
                        fdat.seekp(-long(sizeof(bookData)),ios::cur);
                        fdat.write((char *)&book,sizeof(bookData));
                        cout <<"现库存量：\t\t"<<book.balance<<endl;
                    }
                    else
                        cout <<"书号输入错误\n";
                    break;
                }
            case 'Q':
            case 'q': return;
        }
    }
    fdat.close();
}
