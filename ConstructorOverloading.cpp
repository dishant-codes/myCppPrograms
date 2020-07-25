#include<iostream>

using namespace std;

class Complex
{
    int a,b;
public:
    Complex(int x,int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void printnumber()
    {
        cout<<"the number is "<<a<<" + "<<b<<endl;
    }
};
int main()
{
    Complex a(10,20);
    a.printnumber();

    Complex b(30);
    b.printnumber();

    Complex c;
    c.printnumber();
    return 0;
}
