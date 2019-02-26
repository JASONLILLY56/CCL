///
///@file     Inquire.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 21:26:1551158780
///
#include "ex_11_19.h" 
void Inquire(const char *fileDat)
{
    char choice;
    bookData book;
    long key;//int key;
    fstream fdat(fileDat,ios::in|ios::binary);
    cout << "*************查询******************\n";
    while(1)
    {
        cout << "请输入操作选择\n"
            <<"1：按书号查询\t"<<"2：浏览\t"<<"Q：退出\n";
        cin>> choice;
        switch(choice)
        {
            case '1':
                {
                    fdat.seekg(0,ios::beg);
                    cout << "书号(TP)：\n?";
                    cin >> key;
                    do 
                    {
                        //读一个记录
                        fdat.read((char *)&book,sizeof(bookData));

                    }
                    while(book.TP!=key&&!endMark(book));//判断是否找到
                    if(book.TP==key)
                        cout<<book.TP<<'\t'<<book.bookName<<'\t'<<book.balance<<'\n';
                    else
                    {
                        cout << "书号输入错误\n";
                        continue;
                    }
                    break;
                }
            case '2':
                {
                    fdat.seekg(0,ios::beg);
                    do 
                    {
                        fdat.read((char*)&book,sizeof(bookData));
                        if(!endMark(book))
                            cout << book.TP <<'\t'<<book.bookName<<'\t'<<book.balance<<'\n';
                    }while(!endMark(book));
                    break;
                }
            case 'Q':
            case 'q':   return;
        }
    }
    fdat.close();

}
