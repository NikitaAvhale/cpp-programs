#include<iostream.h>
#include<conio.h>
int main()
{
int n,rev=0,rem,temp;
cout<<"enter a number: ";
cin>>n;
while(n>0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
cout<<" reverse of "<<n<<" is " <<rev;
getch();
return 0;
}