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
using std::ofstream;
using std::cerr;

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

int Append(char *fileName)
{
    char name[30],ch;
    int number ,score;
    ofstream outstuf(fileName,ios::app);
    if(!outstuf)
    {
    
        cerr<<"File could not be open."<<endl;
        return 0;
    }
    cout << "Do you want append record to "<<fileName << "?(Y or N)\n";
    cin >> ch;
    while(ch == 'Y' || ch == 'y')
    {
        cout << "Input the number, name, and score:\n";
        cin >> number >> name >> score;
        outstuf<<number<<' '<<name<<' '<<score<<'\n';
        cout << "?(Y or N)";
        cin >> ch;
        if (ch == 'N'||ch == 'n')
            cout << "Close file.\n";
    }
    outstuf.close();
    return 1;
}

int copyFile(char *destFile, char *srcFile)
{
    char ch;
    ifstream infile(srcFile,ios::in);
    ofstream outfile(destFile,ios::out);
    if(!infile)
    {
        cerr<<srcFile<<":File could not be open."<<endl;
        return 0;
    }
    if(!outfile)
    {
        cerr << destFile<<":File could not be open."<<endl;
        return 0;
    }
    while(infile.get(ch))
        outfile.put(ch);
    infile.close();
    outfile.close();
    cout << "Finish!\n";
    return 1;
}

int main()
{
//    browseFile("Students's.txt",0);
//    browseFile("The_Holy_Bible.txt",0);
//    Append("Students's.txt");
//    browseFile("Students's.txt",0);
    browseFile("test_0.txt",0);
    copyFile("test_0.txt","Students's.txt");
//    browseFile("Students's.txt",0);
    browseFile("test_0.txt",0);
    return 0;
     
}
