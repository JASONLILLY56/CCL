///
///@file     ex_9_11.cc
///@author     Jason(13933536151@163.com)
///@data     2019-03-02 03:08:1551524930
///
  
#include<iostream>
using namespace std;
class Number
{
public:
    Number(int i)
    {
        cout<<"Number(int)"<<endl;
        val = i;
    }
    virtual void Show()const = 0;
protected:
    int val;
};

class Hex_Type:public Number
{
public:
    Hex_Type(int i):Number(i){cout <<"Hex_Type(int)"<<endl;}
    void Show()const
    {
        cout<< "Hex:\t"<<hex<<val<<endl;
    }
};

class Dec_Type:public Number
{
public:
    Dec_Type(int i):Number(i){cout << "Dec_Type(int )"<<endl;}
    void Show() const
    {
        cout <<"Dec:\t"<<dec<<val<<endl;
    }
};

class Oct_Type:public Number
{
public:
    Oct_Type(int i):Number(i){cout<<"Oct_Type(int)"<<endl;}
    void Show() const
    {
        cout << "Oct:\t"<<oct<<val<<endl;
    }
};

void fun(Number & n)
{
    n.Show();
}
 
int main()
{
    Dec_Type n1(50);
    fun(n1);
    Hex_Type n2(50);
    fun(n2);
    Oct_Type n3(50);
    fun(n3);
 
}
