#include<iostream>
using namespace std;
int main()
{
     int *arr = new int[5];
      arr[0] = 10;
      arr[1] = 20;
      arr[2] = 30;
      arr[3] = 40;
      arr[4] = 50;
      delete arr;
     cout<<"the array is "<<arr[0]<<endl;
     cout<<"the array is "<<arr[1]<<endl;
     cout<<"the array is "<<arr[2]<<endl;
     cout<<"the array is "<<arr[3]<<endl;
     cout<<"the array is "<<arr[4]<<endl;
}
