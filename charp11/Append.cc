///
///@file     Append.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 19:40:1551152450

#include "ex_11_19.h"
extern const bookData mark;
void Append(const char *fileDat)
{
    char choice;
    bookData book;
    long key;//int key;
    long num;
    fstream fdat(fileDat,ios::in|ios::out|ios::binary);
    //以读/写方式打开文件，二进制
    if(!fdat)
    {
        cout <<"账目文件不存在，请进行初始化操作。\n";
        return;
    }
    cout<<"*******************入库登记*****************\n";
    while(1)
    {
        cout << "请输入操作选择\n"
            <<"1：新书号\t"<<"2：旧书号\t"<<"Q：退出\n";
        cin >> choice;
        switch(choice)
        {
            case '1':
            {
            
                fdat.seekg(0,ios::beg);
                do
                {
                //读一个记录
                    fdat.read((char*)&book,sizeof(bookData));

                }
                while(!endMark(book));
                //置写指针位置
                fdat.seekp(-long(sizeof(bookData)),ios::cur);
                cout <<"书号(TP)，书名，数量：\n？";
                cin >> book.TP;
                cout << "?";
                //std::getline (std::cin, book.bookName);
                //char step;
                //cin>>noskipws>>step;
                cin >> book.bookName;
                cout << "?";
                cin >> book.balance;
                fdat.write((char*)&book,sizeof(bookData));//写记录
                fdat.write((char*)&mark,sizeof(bookData));//写文件结束标志
                break;
            };
            //case2
            case '2':
            {
                fdat.seekg(0,ios::beg);
                cout << "书号(TP)：\n?";
                cin >> key;
                do
                {
                    //读一个记录
                    fdat.read((char*)&book,sizeof(bookData));
                }
                while(book.TP!=key&&!endMark(book));
                if(book.TP==key)
                {
                    cout << book.TP <<'\t'<<book.bookName<<'\t'
                        <<book.balance<<endl;
                    cout << "入库数量：\n？";
                    cin >>num;
                    if (num>0)
                        book.balance+=num;
                    else
                    {
                        cout<<"数量输入错误\n";
                        continue;
                    }
                    //置写指针位置
                    fdat.seekp(-long(sizeof(bookData)),ios::cur);
                    //写修改后记录
                    fdat.write((char*)&book,sizeof(bookData));
                    cout<<"现库存量：\t\t"<<book.balance<<endl;
                }
                else            //找不到记录
                    cout <<"书号输入错误\n";
                break;
                
            }
            case 'Q':
            case 'q':   return;
        }
    }
    fdat.close();               //关闭文件
}
