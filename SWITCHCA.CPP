#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
int n1,n2;
clrscr();
cout<<"Enter first number";
cin>>n1;
cout<<"enter second number";
cin>>n2;
cout<<"enter the operator";
cin>>ch;

switch(ch)
{
case +:
  cout<<n1<<"+"<<n2<<"="<<n1+n2;
  break;
case -:
  cout<<n1<<"-"<<n2<<"="<<n1-n2;
  break;
case *:
  cout<<n1<<"*"<<n2<<"="<<n1*n2;
  break;
case /:
  cout<<n1<<"/"<<n2<<"="<<n1/n2;
  break;
default:
  cout<<"you entered an invalid operator";
}
getch();
}



