#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H
template<typename T>
class BoundArray : public Array<T>
{
public:
    BoundArray(int low=0,int height = 1);
    virtual const T& Entry (int index) const;
    virtual void Enter (int index, const T& value);
private:
    int min;
};
template <typename T>
BoundArray <T>::BoundArray(int low,int height): Array<T> (height-low +1)
{   if(height-low<0)
    {
        cout << "Beyond the bounds of Array.\n";
        exit(1);
    }
    cout<< "height-low + 1= "<<height-low+1<<endl;
    min = low;
}

template <typename T>
const T& BoundArray<T>::Entry(int index) const
{
#if 1
   //下面的代码无法编译通过的时候，size是Array类(基类)
   //成员变量，即当子类无法访问基类的成员变量或成员函数时
   //可以用this指针访问，也可以直接在成员前加基类的名字Base<T>:: 
    if(index<min||index>min + this->size -1)
    {
        cout << "Beyond the bounds of index.\n";
        exit(1);
    }
#endif    
    return Array<T>::Entry(index - min);
}

template <typename T>
void BoundArray<T>::Enter(int index, const T& value)
{
    cout << "Array<T>::size=\t"<<Array<T>::size<<endl;
#if 1
    if(index < min||index > min + Array<T>::size -1)
    {
        cout << "Beyond the bounds of index.\n";
        exit(1);
    }
#endif    
    Array<T>::Enter(index-min,value);
}
#endif
