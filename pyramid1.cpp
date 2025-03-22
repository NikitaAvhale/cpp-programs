#include<iostream>
int main()
{
int i,j,k=1,a,b;
clrscr();
cout<<"Enter the number:";
cin>>a;
for(i=0;i<=a;i++)
{
for(b=i;b<a;b++)
{
cout<<"\t";
}
for(j=1;j<=i;j++)
{
cout<<k<<"\t";
k++;
}
cout<<"\n";
}
getch();
return 0;
}
