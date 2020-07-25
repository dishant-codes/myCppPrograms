//Default Constructor
#include<iostream>
using namespace std;

class Complex
{
    int a,b;
public:
    Complex(void);

    void printnumber()
    {
        cout<<"The number is "<<a<<" + "<<b<<endl;
    }
};
Complex :: Complex(void)
{
    a = 0;
    b = 0;
}
int main()
{
    Complex a;
    a.printnumber();
    return 0;
}
