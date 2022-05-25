 #include<iostream>
 using namespace std;
 main()
 {
   int a;
   cout<<"Enter the Reynolds Number : ";
   cin>>a;
   if (a>3000)
    cout<<"The flow is Turbulent";
   else if ((a>=2000)&&(a<=3000))
    cout<<"The flow is Transitional";
   else
    cout<<"The flow is Laminar";
 }
