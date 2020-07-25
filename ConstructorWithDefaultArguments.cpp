#include<iostream>
using namespace std;

class Complex{
     int data1,data2,data3;
public:
     Complex(int a=1,int b=2,int c=3)
     {
          data1 = a;
          data2 = b;
          data3 = c;
     }
     void printdata();
};
void Complex ::printdata()
{
     cout<<"The value data1,data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
}
int main()
{
     Complex a(10,20,30);
     a.printdata();
     Complex b(10,30);
     b.printdata();
     Complex c(10);
     c.printdata();
     Complex d;
     d.printdata();
}
