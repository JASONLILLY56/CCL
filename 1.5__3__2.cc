///
///@file     1.5__3__2.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-17 21:15:1550409322
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//求和函数
int Sum(int a[4])
{
    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum+=a[i];
    }
    return sum;
    //return a[0]+a[1]+a[2]+a[3];
}

//求平均值
float Average(int a[4])
{
//    return (a[0]+a[1]+a[2]+a[3])/4;
return Sum(a)/4.0;
}

//求乘积
int Mul(int a[4])
{
    return a[0]*a[1]*a[2]*a[3];
}

//求最小值
int Min(int a[4])
{
    int min=a[0];
    for (int i=1;i<4;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return min;
}

//求最大值
int Max(int a[4])
{
    int max=a[0];
    for (int i=1;i<4;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}


int main()
{
    int A[4];
    cout<<"请输入4个小于100的正整数"<<endl;
 
    for (int i=0;i<4;i++)
    {
        int x=0;
        cin >> x;
        while(x<=0||x>=100) 
        {
        cout << "输入错误"<<endl;
        cin >> x;
        }
        A[i]=x;
        
        
        //cin>>A[i];
        cout << "A["<<i<<"]="<<A[i]<<endl;
    }
    for (int i=0;i<4;i++)
    {
        cout<< "A["<<i<<"]="<<A[i]<<endl;
    }
    cout<<"sum="<< Sum(A)<<endl;
    cout<<"multip="<<Mul(A)<<endl;
    cout<<"average="<<Average(A)<<endl;
    cout<<"max="<< Max(A)<<endl;
    cout<<"min="<<Min(A)<<endl;
//    Min(A[4]);
    return 0;

 
}
