#include<iostream.h>
#include<conio.h>
class sum
{
 int n,i,sum1;
 public:
 sum()
 {
  n=5;
  sum1=0;
 }
 void findsum()
 {
  for(i=1;i<=n;i++)
  {
    sum1=sum1+i;
  }
  cout<<"\nsum="<<sum1;
 }
};
void main()
{
 sum s1;
 clrscr();
 s1.findsum();
 getch();
}