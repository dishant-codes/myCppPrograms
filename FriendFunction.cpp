#include<iostream>
using namespace std;

class Employee
{
    int a,b;
public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;

    }
    void getdata()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
    friend Employee sumComplex(Employee o1, Employee o2);
};

Employee sumComplex(Employee o1, Employee o2)
{
    Employee o3;
    o3.setdata((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
int main()
{
    Employee c1, c2, sum;
    c1.setdata(2,9);
    c1.getdata();

    c2.setdata(1,8);
    c2.getdata();

    sum = sumComplex(c1,c2);
    sum.getdata();
    return 0;
}
