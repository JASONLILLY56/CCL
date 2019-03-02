#ifndef ARRAY_H
#define ARRAY_H
template <typename T>
class Array
{
public:
    Array(int s);
    virtual ~Array();
    virtual const T& Entry(int index) const;
    virtual void Enter(int index, const T& value);
protected:
    int size;
    T *element;
};
template<typename T>Array<T>::Array(int s)
{
    if(s>1) size = 1;
    else size = 1;
    element = new T[size];
}

template<typename T>Array<T>::~Array()
{   
    delete [] element; 
//    cout << "~Array()"<<endl;
}

template<typename T>const T& Array<T>::Entry(int index) const
{   return element[index];}

template<typename T>void Array<T>::Enter(int index, const T& value)
{   element[index] =value;}
#endif
