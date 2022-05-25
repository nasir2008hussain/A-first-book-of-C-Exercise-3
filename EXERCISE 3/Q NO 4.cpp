#include<iostream>
using namespace std;
main()
{
	int m=2500000,y;
	float intr;
	cout<<"Enter the number of Year : ";
	cin>>y;
	if (y>=5)
	{ intr=((m/100.0)*0.040);
	  cout<<"Interest rate corresponding with the time : "<<y<<" Year is "<<intr;
	}
	else if (y==4)
	{ intr=((m/100.0)*0.035);
	  cout<<"Interest rate corresponding with the time : "<<y<<" Year is "<<intr;
	}
	else if (y==3)
	{ intr=((m/100.0)*0.030);
	  cout<<"Interest rate corresponding with the time : "<<y<<" Year is "<<intr;
	}
	else if (y==2)
	{ intr=((m/100.0)*0.025);
	  cout<<"Interest rate corresponding with the time : "<<y<<" Year is "<<intr;
	}
	else if (y==1)
	{ intr=((m/100.0)*0.020);
	  cout<<"Interest rate corresponding with the time : "<<y<<" Year is "<<intr;
	}
	else
	{ intr=((m/100.0)*0.015);
	  cout<<"Interest rate corresponding with the time : "<<y<<" Year is "<<intr;
	}
}
