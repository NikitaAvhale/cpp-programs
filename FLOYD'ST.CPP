#include<iostream.h>
#include<conio.h>
void main()
{
int n=1,i,j;
clrscr();
for(i=1;i<6;++i)
{
for(j=1;j<i;++j)
{
cout<<n;
++n;
}
cout<<"\n";
}
getch();
}