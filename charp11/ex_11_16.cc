///
///@file     ex_11_16.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-25 07:24:1551108283
///
  
#include<iostream>
#include<fstream>

using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ios;
 
 
int main()
{
    int i,j;
    fstream f;
    //建立文件，写方式打开文件
    f.open("DATA.dat",ios::out|ios::binary);
    for(i=1;i<=10;i++)
        f.write((char*)&i,sizeof(int));
    f.close();

    //修改文件，读/写方式打开文件
    f.open("DATA.dat",ios::in|ios::out|ios::binary);
    for (i=0;i<10;i++)
    {
        f.seekg(long(sizeof(int)*i));
        f.read((char*)&j,sizeof(int));
        if(j%2)
        {
            j+=10;
            f.seekp(-long(sizeof(int)),ios::cur);
            f.write((char*)&j,sizeof(int));
        }
    }
    
    f.seekg(long(sizeof(int)*10));
    for(i=91;i<=95;i++)
        f.write((char*)&i,sizeof(int));
    f.seekg(0,ios::beg);
    for (i=0;i<15;i++)
    {
        f.read((char*)&j,sizeof(int));
        cout << j<<" ";
    }
    cout << endl;
    f.close();
 
}
