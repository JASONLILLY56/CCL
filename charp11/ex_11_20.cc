///
///@file     ex_11_20.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-26 00:55:1551171304
///
  
#include<iostream>
#include<fstream>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::fstream;
int lockUnlock(char * fileName)
{
    int i,r=13;
    unsigned char j;
    fstream f;
    //修改文件
    f.open(fileName,ios::in|ios::out|ios::binary);
    f.seekp(0,ios::beg);
    for(i=0;i<1000;i++)
    {
        r=(25171*r+13859)%127;
        f.seekg(long(sizeof(char)*i));
        f.read((char*)&j,sizeof(char));
        j^=r;
        f.seekp(-long(sizeof(char)),ios::cur);
        f.write((char*)&j,sizeof(char));
    }
    f.close();
    return 0;
}
 
 
int main()
{
    char fileName[30];
    cout <<"input file name:\n";
    cin >> fileName;
    cout<<"Locking........."<<endl;
    lockUnlock(fileName);
    cout <<"Locked Finish"<<endl;
//    system("pause");
//    cout << "Unlocking........"<<endl;
//    lockUnlock(fileName);
 
}
