#include<iostream.h>
#include<conio.h>
void main()
{
float n1,n2,n3,n4,n5,n6;
cout<<"Enter any number :"<<endl;
cin>>n1>>n2>>n3>>n4>>n5>>n6;
if(n1>n2&&n1>n3&&n1>n4&&n1>n5&&n1>n6)
cout<<"Maximum number n1"<<endl;
if(n2>n1&&n2>n3&&n2>n4&&n2>n5&&n2>n6)
cout<<"Maximum number n2"<<endl;
if(n3>n2&&n3>n1&&n3>n4&&n3>n5&&n3>n6)
cout<<"Maximum number n3"<<endl;
if(n4>n2&&n4>n3&&n4>n1&&n4>n5&&n4>n6)
cout<<"Maximum number n4"<<endl;
if(n5>n2&&n5>n3&&n5>n4&&n5>n1&&n5>n6)
cout<<"Maximum number n5"<<endl;
if(n6>n2&&n6>n3&&n6>n4&&n6>n5&&n6>n1)
cout<<"Maximum number n6"<<endl;
getch();
}