#include <iostream>
using namespace std;
template<class T>
class Array
{
private:
 T *A;
 int size;
 int length;
public:
 Array()
 {
 size=10;
 A=new T[10];
 length=0;
 }
 Array(int sz)
 {
 size=sz;
 length=0;
 A=new T[size];
 }
 ~Array()
 {
 delete []A;
 }
 void Display();
 void Insert(int index,T x);
 T Delete(int index);
};
template<class T>
void Array<T>::Display()
{
 for(int i=0;i<length;i++)
 cout<<A[i]<<" ";
 cout<<endl;
}
template<class T>
void Array<T>::Insert(int index,T x)
{
 if(index>=0 && index<=length)
 {
 for(int i=length-1;i>=index;i--)
