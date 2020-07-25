//Default Constructor
#include<iostream>
using namespace std;

class DefCon
{
    int a,b;
public:
    DefCon(void);
    void printnumber(void)
    {
        cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    }
};

DefCon :: DefCon(void)
{
    a = 1;
    b = 2;
}

int main()
{
    DefCon a,b;
    a.printnumber();
    b.printnumber();

    return 0;
}
