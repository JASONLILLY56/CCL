///
///@file     ex_7_9.cc
///@author     Jason(13933536151@163.com)
///@data     2019-03-01 03:42:1551440555
///
  
#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
    char *data;
    int size;
public:
    String(char *s)
    {
        size = strlen(s);
        data = new char(size + 1);
        strcpy(data,  s);
    }
    operator char * () const
    {   return data; }
};

int main()
{
    String sobj = "hell";
    char * svar = sobj;
    cout << svar << endl;
    return 0;
 
}
