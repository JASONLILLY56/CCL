///
///@file     ex_6_16.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-22 21:29:1550842149
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
 
class Goods
{   public:
        Goods(int w)//构造函数
        {
            weight = w;
            total_weight+=w;//买进货物，进行收入
        }
        ~Goods()//析构函数，卖出货物，进行支出
        {
            total_weight-=weight;
        }
        int Weight()
        {
            return weight;//调用函数获取当前重量
        }

        static int TotalWeight()
        {
            return total_weight;//返回得到当前总重量
        }
        
        Goods *next;//next域指针，指向下一个结点
    private:
        int weight;//私有成员，记录每一个结点的货物重量
        static int total_weight; //静态数据成员，记录货物总重量 
};

int Goods::total_weight=0;//static类中声明，类外定义
void purchase(Goods *&f, Goods *&r, int w)//f代表队头，r代表队尾，p为工作指针
    //购进货物，从表尾插入结点
{
    Goods *p =new Goods(w);//new一个类类型变量Goods的空间，并赋初值w
    p->next = NULL;//工作指针，next域为空
    if(f==NULL) f=r=p;//头指针指向为空，工作指针，头指针，尾指针都为空指针
    else    //否则进行尾插法
    {   r->next = p;
        r=r->next;    
    }
}

void sale(Goods *& f, Goods * &r)//传递参数为头、尾指针
{
    if(f==NULL)//头为空
    {
        cout << "No Any Goods!\n";
        return; //并进行返回，跳出程序，不返回任何
                //在main函数里面是return 0；
    }

    Goods *q = f;//头删法工作指针，删除操作中的临时指针
    f = f->next;
    delete q;//删除q所指的空间
    q = NULL;//将工作指针置空
    cout << "saled.\n";
}


 
int main()
{
    Goods *front = NULL, *rear = NULL;  //初始化头尾指针，rear用于插入，排队
                                        //front用于出队
    int w;
    int choice;
    do
    {
        cout << "Please choice:\n";
        cout << "1-purchase, 2-sale, 0-over.\n";
        cin >> choice;
        switch(choice)
        {
            case 1:
                {
                    cout << "Input weight:";
                    cin >> w,
                    purchase(front, rear, w);
                    break;//switch操作
                }
            case 2:
                {
                    sale(front, rear);
                    break;//
                }
            case 0:
                break;
        }
        cout << "Now total weight is:" << Goods::TotalWeight() <<endl;
    }while (choice);//do while 循环，以choice为0结束

}
