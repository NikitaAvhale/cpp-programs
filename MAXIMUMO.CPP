#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
cout<<"enter three numbers: ";
cin>>a>>b>>c;
if(a>b && a>c)
{
cout<<a << " is greater than " <<b<<" and "<<c;
}
else if(b>c)
{
cout<<b<<" is greater than "<<a<<"\t"<<c;
}
else
{
cout<<c<<"is greater than "<<a<<"\t"<<b;
}
getch();
return 0;
}