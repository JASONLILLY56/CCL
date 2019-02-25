///
///@file     ex_11_13.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 00:48:1551084535
///
  
#include<iostream>
#include<fstream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::ifstream;
void browseFile(char *fileName,int delLine)
{
    ifstream inf(fileName,ios::in);
    char s[800];
    for (int i=1;i<=delLine;i++)
        inf.getline(s,800);
    while(!inf.eof())
    {
        inf.getline(s,800);
        cout << s << endl;
    }
    inf.close();
}

 
int main()
{
    browseFile("test.txt",0);
    browseFile("The_Holy_Bible.txt",0);
    return 0;
 
}
