#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter the Angle in degree : ";
	cin>>a;
	if (a<90)
	 cout<<"This is an Acute Angle";
	else if (a>90)
	 cout<<"This is an Obtuse Angle";
	else
	 cout<<"This is Right Angle";
}
