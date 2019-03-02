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
    min = low;
}

template <typename T>
const T& BoundArray<T>::Entry(int index) const
{
#if 1 
    if(index<min||index>min + size -1)
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
#if 0
    if(index < min||index > min + size -1)
    {
        cout << "Beyond the bounds of index.\n";
        exit(1);
    }
#endif    
    Array<T>::Enter(index-min,value);
}
#endif
