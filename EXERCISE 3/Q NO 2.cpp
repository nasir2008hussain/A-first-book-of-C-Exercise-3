#include<iostream>
using namespace std;
main()
{
	int c;
	cout<<"Enter the Student's Credit : ";
	cin>>c;
	if(c<32)
	 cout<<"Your Grade is :FRESHMAN : ";
	else if((c>=32)&&(c<=63))
	 cout<<"Your Grade is :SOPHOMORE : ";
	else if((c>=64)&&(c<=95))
	 cout<<"Your Grade is :JUNIOR : ";
	else
	 cout<<"Your Grade is :SENIOR : ";
}
