///
///@file     ex_6_9.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-20 13:20:1550640045
///
//深复制和浅复制 
#include <string.h>
#include<iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::strncpy; 
class Name
{   public:
        Name(const char *pn);
        Name(const Name &Obj);
        //Name(char *pn);
        //Name(const Name &Obj);
        ~Name();
        //void setName(char *);
        void setName(const char *);
        void showName();

    protected:
        char *pName;
        int size;
};

Name::Name(const char *pn)
//Name::Name(char *pn)
{
    cout << "Constructing"<<pn<<endl;
    pName = new char[strlen(pn)+1];
    if(pName != 0)  strncpy(pName,pn,strlen(pn)+1);
    size = strlen(pn);
}

Name::Name(const Name &Obj)
{
    cout << "Copying"<<Obj.pName<<"into its own block\n";
    pName = new char[strlen(Obj.pName)+1];
    if(pName!=0) strncpy(pName,Obj.pName,strlen(Obj.pName)+1);
    size = Obj.size;

}
Name::~Name()
{
    cout << "Destructing"<<pName<<endl;
    pName[0]='\0';
    delete []pName;
    pName =NULL;
    size = 0;
}

void Name::setName(const char *pn)
//void Name::setName(char *pn)
{
    delete []pName;
    pName = new char[strlen(pn)+1];
    if(pName!=0) strncpy(pName,pn,strlen(pn)+1);
    size = strlen(pn);
}

void Name::showName()
{
    cout << pName << endl;
}

int main()
{
    Name Obj1("NoName");
    Name Obj2 = Obj1;
    Obj1.showName();
    Obj2.showName();
    Obj1.setName("SuDongPo");
    Obj2.setName("DuFu");
    Obj1.showName();
    Obj2.showName();
    return 0;
}

