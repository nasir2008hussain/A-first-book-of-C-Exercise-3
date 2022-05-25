#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter the Angle : ";
	cin>>a;
	if (a==0)
	 cout<<"The Angle lies on positive x-axis";
	else if (a==90)
	 cout<<"The Angle lies on positive y-axis";
	else if (a==180)
	 cout<<"The Angle lies on negative x-axis";
	else if (a==270)
	 cout<<"The Angle lies on negative y-axis";
	else if ((a>0)&&(a<90))
	 cout<<"The Angle is in I-QUADRANT";
	else if ((a>90)&&(a<180))
	 cout<<"The Angle is in II-QUADRANT";
	else if ((a>180)&&(a<270))
	 cout<<"The Angle is in III-QUADRANT";
	else if ((a>270)&&(a<360))
	 cout<<"The Angle is in IV-QUADRANT";
	else
	 cout<<"Invalid Angle";
	
	
}
