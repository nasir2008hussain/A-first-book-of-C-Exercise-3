#include<iostream>
using namespace std;
main()
{
	int a,b,c,d;
	float f;
	cout<<"Enter two real number : ";
	cin>>a>>b;
	cout<<"Select the code (1-3) : ";
	cin>>c;
	if (c==1)
	 {
	 d=(a+b);
	 cout<<"Result Addition : "<<d ;}
	else if (c==2)
	 {
	 d=(a*b);
	 cout<<"Result Multipicaton : "<<d;}
	else if(c==3){
	 if(b==0)
	  cout<<"0 not allowed";
	 else
	  {f=(a/(b+0.0));
	  cout<<"Result Divison : "<<f;}
	  
}
}
