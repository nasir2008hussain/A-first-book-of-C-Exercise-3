#include<iostream>
using namespace std;
main()
{
	int t;
	char a;
	float celcius, fah;
	cout<<"Enter the Temperature : ";
	cin>>t;
	cout<<"\t";
	cin>>a;
	if ((a=='f')||(a=='F'))
	 {
	 cout<<"The Temperature is in Fahrenheit : "<<t<<"'"<<a<<"\n";
	 celcius= (5.0 / 9.0)*(t - 32.0) ;
	 cout<<"Now the Temperature is in Celcius : "<<celcius<<"'C'";
}
	else if ((a=='c')||(a=='C'))
	 {
	  fah=((9.0 / 5.0)*(t+ 32.0));
	  cout<<"The Temperature is in Celcius : "<<t<<"'"<<a<<"\n";
	  cout<<"Now the Temperature is in Fahrenheit : "<<fah<<"'F'";
}
	 
}
