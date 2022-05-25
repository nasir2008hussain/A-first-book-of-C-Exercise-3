#include<iostream>
using namespace std;
main()
{
	int mi,ai;
	float tax;
	cout<<"Enter your Monthly income : ";
	cin>>mi;
	ai=(mi*12);
	if (ai<250000)
	 {
	   tax=((10/100)*250000);
	  cout<<"Your annual income is : "<<ai<<"\nYour tax rate is : "<<tax;
      }
	if (ai>250000&& ai<1000000)
	 {
	 tax=((15/100)*1000000);
	 cout<<"Your annual income is : "<<ai<<"\nYour tax rate is : "<<tax;
       }
    if (ai>1000000 && ai<2500000)
    {
	  tax=((20/100)*2500000);
	 cout<<"Your annual income is : "<<ai<<"\nYour tax rate is : "<<tax;
      }
	if ((ai>2500000)&&(ai<4500000))
    {
	  tax=((25/100)*4500000);
	cout<<"Your annual income is : "<<ai<<"\nYour tax rate is : "<<tax;
} 
 }

