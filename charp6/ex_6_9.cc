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
        Name(const Name &p);
        ~Name();
        void setName(const char *);
        void showName();
    //protected:
        char *pName;
        int size;
};

Name::Name(const char *pn)
{
    cout << "Constructing:   "<<pn<<endl;
    pName = new char[strlen(pn)+1];
    if(pName != 0)  strncpy(pName,pn,strlen(pn)+1);
    size = strlen(pn);
}

Name::~Name()
{
    cout << "Destructing:   "<<pName<<endl;
    delete []pName;
    pName =NULL;
    size = 0;
}

Name::Name(const Name &p)
{
    pName=p.pName;
    size =p.size;
    cout <<"Copy_constructor called."<<endl;
}

void Name::setName(const char *pn)
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

    Obj1.setName("ZhangSan");
    Obj1.showName();
    Obj2.setName("JasonWu");
    Obj1.showName();
    Obj2.showName();
    cout<<"Obj1的地址："<<&Obj1<<endl;
    cout<<"Obj2的地址："<<&Obj2<<endl;
    cout<<"Obj1.pName:  "<<(void *)Obj1.pName<<endl;
    cout<<"Obj2.pName:  "<<(void *)Obj2.pName<<endl;
    //The reason for that is that std::cout will treat a char * as a pointer to (the first character of) a C-style string and print it as such.
    // If you want the address instead, you can just cast it to a pointer that isn'=t treated that way, something like:
    //cout << (void *) terry;
    //(or use the const void * cast if you're worried about casting away constness, something that's not an issue in this particular case).
    cout<<"*Obj1.pName:  "<<*Obj1.pName<<endl;
    cout<<"*Obj2.pName:  "<<*Obj2.pName<<endl;
    return 0;
}


///////////执行结果——————————————————————————————————————————————————

//ConstructingNoName
//ZhangSan
//Obj1的地址：0x7ffee76139d8
//Obj2的地址：0x7ffee76139c8
//Obj1.pName:  0x7ffee76139d8
//Obj2.pName:  0x7ffee76139c8
//*Obj1.pName:  Z
//*Obj2.pName:  Z
//DestructingZhangSan
//DestructingZhangSan
//a.out(5446,0x10f3f95c0) malloc: *** error for object 0x7fc1f1c00630: pointer being freed was not allocated
//a.out(5446,0x10f3f95c0) malloc: *** set a breakpoint in malloc_error_break to debug
//Abort trap: 6




