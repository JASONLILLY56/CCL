///
///@file     1.4__2.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-08 09:21:1549588881
///
//a=200
//b=30
//*p=200
//*q=30
//ra=200
//*rt=30
//
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
 
int main()
{
    int a=10,b=20;
    int *p=&a,*q=&b;//指针p指向a所在的内存位置，指针q指向b所在的内存位置
    *p=*q**p;//对p所在的位置进行解引用，获取到p所指内存中的值
            //并且与q所指内存中的值进行相乘并将结果存入到p所指内存中，
            //p所指内存的代号就是a
    int &ra=a;//对a进行引用取其别名为ra
    ra=66;//修改ra的值就等于是修改了a的值
    int *&rt=q;//对q指针取一个别名rt（指针类型）
    *rt=30;//修改rt所指内存中的内容也就是修改q指针所指内存中的内容为30
    cout << "a="<< a<<"\nb="<<b<<"\n*p="<<*p<<"\n*q="<<*q
        <<"\nra="<<ra<<"\n*rt="<<*rt<<endl;
    return 0;
}
