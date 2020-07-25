#include<iostream>
using namespace std;

int volume(int a)
{
// Formula for the calculating volume of cube
   return a * a * a;
}

int volume(double r,int h)
{
// Formula for the calculating volume of cylinder
   return(3.14 * r * r * h);
}

int volume(int l,int b,int h)
{
// Formula for the calculating volume of Rectangular Box
   return(l*b*h);
}

int main()
{

	cout<<"the volume of cube at 3 side is "<<volume(4)<<endl;
	cout<<"the volume of cuboid of 3 , 7 and 6 is "<<volume(3,7,6)<<endl;
	cout<<"the volume of cylinder at radius 3 & height 6 is "<<volume(3,6)<<endl;

	return 0;
}
