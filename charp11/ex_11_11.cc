///
///@file     ex_11_11.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-24 22:44:1551077055
///
  
#include<iostream>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::cerr;
using std::ofstream;
 
 
int main()
{
    char fileName[30],name[30];
    int number,score;
    ofstream outstuf;

    cout << "Please input the name of students file:\n";
    cin >> fileName;
    outstuf.open(fileName, ios::out);
    if(!outstuf)
    {
        cerr << "File could not be open."<<endl;
        abort();
    }

    outstuf<<"This is a file of students\n";
    cout << "Input the number, name, and score:"
        <<"(Enter Ctrl + d to end input)\n";
    cout << "->";
    while(cin>>number>>name>>score)
    {
        outstuf << number << ' '<<name<<' '<<score<<'\n';
        cout << "->";
    }
    outstuf.close();
}
